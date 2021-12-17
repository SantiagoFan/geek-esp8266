# Geek ESP8266
项目是基于gitee上 geek-esp8266 基础上进行了整理和新增，感谢大佬的灵感和框架
新增了链接MQTT的代码和配置页面

#### 项目说明

> 项目基于ESP8266 12F开发，ESP8266的开发资源非常丰富，但是炫酷的UI界面很少，因此诞生了本项目。

#### Arduino相关依赖

``` bash
# 库管理器中下载安装
ArduinoJson 6.18.5
WebSockets 2.1.4   #作者是Markus Sattler
# 开发板管理器中下载安装
esp8266 2.7.4
```

#### 开放端口

|  端口服务   |  端口   |   示例  |
| --- | --- | --- |
|   WebUI  |   80  |   http://192.168.8.1  |
|   WebSocket  |   8181  |   ws://192.168.8.1:8181  |

#### 连接AP热点

``` bash
ap_ssid：Geek_Ros_Wifi
ap_password：geekros.com
```

> 可在framework.ino文件的26、27行进行自定义修改。

#### 虚拟遥控器通讯协议

> 数据格式为：JSON字符串，下位机可通过CJson进行解析处理。

``` json
{
    "type":"rocker-control-write",
    "s1":3,
    "s2":3,
    "ch0":187,
    "ch1":465,
    "ch2":159,
    "ch3":437
}
```

#### 注意事项

> 附近WiFi扫描时仅展示信号强弱小于-65的WiFi，支持断电保存和自动连接，可在framework.ino文件的81行进行自定义修改。

> WebSocket接收到所有消息数据均会通过UART(串口)输出，请见framework.ino文件的SocketEvent函数。

#### 开源协议

> 基于MIT开源协议进行开源，你可以使用在任何地方，但需保留相关版权信息。
