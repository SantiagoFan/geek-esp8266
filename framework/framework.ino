/**
  ******************************************************************************
  * @file    Geek_ESP8266.c
  * @author  GEEKROS,  site:www.geekros.com
  ******************************************************************************
*/

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <WebSocketsServer.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>

#include "home_html.h"
#include "config_html.h"
#include "wifi_html.h"
#include "mqtt_html.h"
#include "remote_control.h"

ESP8266WebServer http_server;
WebSocketsServer socket_server = WebSocketsServer(8181);
StaticJsonDocument<256> config_json;
/******************* MQTT参数 *****************************/
WiFiClient espClient;
PubSubClient mqtt_client(espClient);
void initMQTT(const char* mqtt_server,const char* mqtt_port){
  mqtt_client.setServer(mqtt_server, atoi(mqtt_port));
  mqtt_client.setCallback(mqtt_callback);
}
void mqtt_reconnect() {
    String clientId = "ESP-01A-" + String(random(0xffff), HEX);
    if (mqtt_client.connect(clientId.c_str())) {         //连接成功
      Serial.println("=== MQTT CONNECT SUCCESS ! ===");
      String msg;
      serializeJson(config_json,msg);
      Serial.println(msg);
      mqtt_client.publish("hass/sensor/esp8266_1/led/state",msg.c_str());     // 连接成功发送初始状态信息
      mqtt_client.subscribe("hass/sensor/esp8266_1/led/set");
    } else {
//      delay(5000);                                  // Wait 5 seconds before retrying
    }
}
/**
 * MQTT 接收数据
 */
void mqtt_callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("接收消息：");
  DynamicJsonDocument doc(200);
  deserializeJson(doc, payload);
  serializeJson(doc,Serial);
  Serial.println("");
  // 业务处理
  String key = doc["key"];
  String value = doc["value"];
  // 更新状态
  config_json[key] = value;
  config_json["update_time"] = random(100);
  String msg;
  serializeJson(config_json,msg);
  Serial.print("更新状态：");
  Serial.println(msg);
  mqtt_client.publish("hass/sensor/esp8266_1/led/state",msg.c_str());     // 状态信息
}

/******************* STA模式配置 *****************************/
IPAddress sta_ip(0, 0, 0, 0);

/******************* AP模式配置 *****************************/
const char *ap_ssid = "Geek_Ros_Wifi";
const char *ap_password = "geekros.com";
IPAddress ap_ip(192, 168, 8, 1);
IPAddress ap_gateway(192, 168, 8, 1);
IPAddress ap_subnet_mask(255, 255, 255, 0);



void setup() {
    
    Serial.begin(115200);
    delay(1000);
    
    config_json["code"] = 0;
    JsonObject data = config_json.createNestedObject("data");
    data["platform"] = "ESP8266";
    data["camera"] = false;
    data["service_ip"] = ap_ip;
    
    WiFi.mode(WIFI_AP_STA);

    WiFi.hostname(ap_ssid);
    
    WiFi.softAP(ap_ssid, ap_password);
    WiFi.softAPConfig(ap_ip, ap_gateway, ap_subnet_mask);
    
    data["sta_ip"] = sta_ip;

    config_json["msg"] = "success";
    
    http_server.begin();
    
    // 页面路由
    http_server.on("/", HTTP_GET, [](){
        http_server.send(200, "text/html", home_html);
    });
    http_server.on("/config", HTTP_GET, [](){
        http_server.send(200, "text/html", config_html);
    });
    http_server.on("/wifi", HTTP_GET, [](){
        http_server.send(200, "text/html", wifi_html);
    });
    http_server.on("/mqtt", HTTP_GET, [](){
        http_server.send(200, "text/html", mqtt_html);
    });
    http_server.on("/remote_control", HTTP_GET, [](){
        http_server.send(200, "text/html", remote_control_html);
    });
    http_server.on("/ping", HTTP_GET, [](){
        String json_string = "";
        config_json["data"]["sta_ip"] = WiFi.localIP();
        serializeJson(config_json, json_string);
        http_server.send(200, "application/json", json_string);
    });
    http_server.on("/scan", HTTP_GET, [](){
        String json_string = "";
        StaticJsonDocument<1024> wifi_scan_json;
        wifi_scan_json["code"] = 0;
        wifi_scan_json["msg"] = "success";
        int n = WiFi.scanNetworks();
        if(n > 0){
           for (int i = 0; i < n; ++i){
              if(WiFi.RSSI(i) > -65){
                  wifi_scan_json["data"][i]["ssid"] = WiFi.SSID(i);
                  wifi_scan_json["data"][i]["rssi"] = WiFi.RSSI(i);
                  wifi_scan_json["data"][i]["pass"] = WiFi.encryptionType(i) == ENC_TYPE_NONE ? "false" : "true";
              }
           }
        }
        serializeJson(wifi_scan_json, json_string);
        http_server.send(200, "application/json", json_string);
    });
    http_server.on("/scan/connect", HTTP_GET, [](){
        String json_string = "";
        WiFi.begin(http_server.arg("select"), http_server.arg("input"));
        StaticJsonDocument<256> wifi_connect_json;
        wifi_connect_json["code"] = 0;
        wifi_connect_json["msg"] = "success";
        wifi_connect_json["data"]["ip"] = "";
        sta_ip = WiFi.localIP();
        Serial.println(sta_ip.toString());
        if(!sta_ip){
            wifi_connect_json["code"] = 10000;
            wifi_connect_json["msg"] = "error";
        }else{
            WiFi.setAutoConnect(true);
        }
        serializeJson(wifi_connect_json, json_string);
        http_server.send(200, "application/json", json_string);
    });
    http_server.on("/mqtt/state", HTTP_GET, [](){
        String json_string = "";
        StaticJsonDocument<1024> mqtt_state_json;
        mqtt_state_json["code"] = 0;
        mqtt_state_json["msg"] = "success";
        serializeJson(mqtt_state_json, json_string);
        http_server.send(200, "application/json", json_string);
    });
    http_server.on("/mqtt/connect", HTTP_GET, [](){
        
       const char* mqtt_server = http_server.arg("ip").c_str();
       const char* mqtt_port = http_server.arg("port").c_str();
        // 初始化MQTT
        initMQTT(mqtt_server,mqtt_port);
        // 链接MQTT
        mqtt_reconnect();
        String json_string = "";
        StaticJsonDocument<256> mqtt_connect_json;
        mqtt_connect_json["code"] = 0;
        mqtt_connect_json["msg"] = "success";
        
        mqtt_connect_json["data"]["ip"] = mqtt_server;
        mqtt_connect_json["data"]["ip"] = mqtt_port;
        if (!mqtt_client.connected()) {
           mqtt_connect_json["code"] = 10000;
           mqtt_connect_json["msg"] = "error";
        }
        serializeJson(mqtt_connect_json, json_string);
        http_server.send(200, "application/json", json_string);
    });
//    socket_server.begin();
//    socket_server.onEvent(SocketEvent);
}

void loop() { 

    socket_server.loop();
    mqtt_client.loop();
    http_server.handleClient();
    delay(5);
}

void SocketEvent(uint8_t num, WStype_t type, uint8_t *payload, size_t length)
{
    if(type == WStype_TEXT){
      
        String payload_string = String((char*) payload);
        Serial.println(payload_string);
    }
}
