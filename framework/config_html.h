/**
  ******************************************************************************
  * @file    config_html.h
  * @author  GEEKROS,  site:www.geekros.com
  ******************************************************************************
*/

#ifndef CONFIG_HTML
#define CONFIG_HTML

const char config_html[] PROGMEM = R"=====(

<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>GEEK ROS WIFI</title>
    <style>
        * {
            box-sizing: border-box;
            -webkit-tap-highlight-color: transparent;
            -webkit-appearance: none;
            -webkit-touch-callout: none;
            outline: none;
            user-select: none;
            margin: 0;
            padding: 0;
            content: none;
        }
        body {
            font-family: -apple-system,BlinkMacSystemFont,"Helvetica Neue","PingFang SC","Hiragino Sans GB","Microsoft YaHei UI","Microsoft YaHei",Arial,sans-serif;
            font-feature-settings: "tnum";
            font-variant: tabular-nums;
            -webkit-font-smoothing: antialiased;
            font-size: 14px;
            content: none;
            color: #999999;
            background-color: #f9f9f9;
        }
        a {
            text-decoration: none;
            color: #999999;
        }
        .page-view{
            width: 100%;
            height: 100%;
            margin: 0 auto;
            position: fixed;
            top: 0;
            left: 0;
            right: 0;
            bottom: 0;
            z-index: 1;
            background-color: #000000;
        }
        .page-view .return-view{
            width: 35px;
            height: 35px;
            position: absolute;
            top: 10px;
            left: 10px;
            background-color: #000000;
            border-radius: 20px;
            text-align: center;
            padding-top: 10px;
        }
        .page-view .return-view img{
            width: 15px;
            height: 15px;
        }
        .page-view .header{
            width: 100%;
            height: 200px;
            text-align: center;
            padding: 50px 0;
            background-color: #1a1c1e;
        }
        .page-view .header .logo{
            width: 60px;
            height: 60px;
            margin: 0 auto;
        }
        .page-view .header .logo img{
            width: 60px;
            height: 60px;
        }
        .page-view .header .title{
            line-height: 40px;
            font-size: 14px;
        }
        .page-view .item-view{
            width: 100%;
            padding: 40px;
        }
        .page-view .item-view .item{
            width: 100%;
            height: 35px;
            line-height: 35px;
        }
        .page-view .item-view .item span{
            width: 100px;
            height: 35px;
            display: inline-block;
            font-size: 12px;
            color: #666666;
            text-align: right;
        }
        .page-view .item-view .item span:last-child{
            text-align: left;
            padding-left: 10px;
            color: #999999;
        }
        .page-view .footer{
            width: 100%;
            height: 30px;
            position: fixed;
            left: 0;
            right: 0;
            bottom: 10px;
            font-size: 12px;
            text-align: center;
            line-height: 15px;
            color: #666666;
        }
        @media screen and (min-width: 1024px)
        {
            .page-view{
                max-width: 480px;
            }
        }
    </style>
</head>
<body onload="start_ping()">
    <div class="page-view">
        <div class="return-view">
            <a href="/">
                <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADIAAAAyCAYAAAAeP4ixAAACvElEQVRoQ+3YT4hOURzG8edZkFKyMFmwkLBAYUWTFAssWMkYUyxQshn5t0AxsxmbGYWSkD81GrGhxEaRLCykiBJRSikhZSGlHp36Tf16k7nnnnPva6Z71+ec+/3cc2fuvS8xQQ5OEAcayP+2k82ONDtS0RVobq2KLmzpZdu6I5IWA1gF4BuA2yR/lpW0DSKpE8AVAPMtfgnJF+MKImm9IWa68Hkk340biKQuAFcBTHHRR0ieKIsI82q9tSTtAnChJbiX5JkURK0QSfsBDLUE7yB5ORVRG0RSH4DjLvg3gB6SN3MgaoFIOglgnwv+boh7uRCVQyRdBLDTBX8EsJXk45yIyiCSJgMYBrDZBb8G0E3yeW5EJRBJMwBcA7DWBT8FsIXk+yoQ2SGS5hpihQt+aIjPVSGyQiQtNcRCF3wHQFfKO1RRfJYHoqTw4hdup9nuxCMke4qGpI5LhkjaYIhpLuY8yd2pcTHzkyCSwm30quWEQyQPxkTkGJsKCU/r8NQePfpI9ucIi10jFdIB4AGARe7EAySPxoakjk+ChJNLWgDgOoBlLmaQ5KHUuJj5yRDDzDHMcnfy0yT3xsSkjM0CMcwsw6x0QedI7kkJLDo3G8Qw4W8m3GZrXMAlkv7FsWhb1LisEMNMN8w6VzJMcltUWeTg7BDDTAUwAmCj67lhb7+KbCw0vBKIYSYZZpMruWWYX4XqIgZVBhltkBR2pts13TXMj4jOMYdWDrHdCT//bHc19w3zdczCggNqgRim9bP3kWE+FWz957DaIIY5C8A/V54Y5kMqplaIYU4B6HXhzwzzNgVTO8QwgwAOuPCXADpJlv4H0BaIYQYAHHaY1STD932po20Qw4Rvl2NW3kHySylF3T9i/y0yfAaQfFMWMDqvrTuSGu/nN5CcVzPHWs2O5LiKOddodiTn1cyx1h+NU7kzVNiE1gAAAABJRU5ErkJggg==" />
            </a>
        </div>
        <div class="header">
            <div class="logo">
                <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAFAAAABQCAYAAACOEfKtAAAACXBIWXMAAAsTAAALEwEAmpwYAAAGvmlUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNi4wLWMwMDIgNzkuMTY0NDg4LCAyMDIwLzA3LzEwLTIyOjA2OjUzICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdEV2dD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlRXZlbnQjIiB4bWxuczpkYz0iaHR0cDovL3B1cmwub3JnL2RjL2VsZW1lbnRzLzEuMS8iIHhtbG5zOnBob3Rvc2hvcD0iaHR0cDovL25zLmFkb2JlLmNvbS9waG90b3Nob3AvMS4wLyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgMjIuMCAoV2luZG93cykiIHhtcDpDcmVhdGVEYXRlPSIyMDIxLTEwLTI4VDIyOjM3OjI1KzA4OjAwIiB4bXA6TWV0YWRhdGFEYXRlPSIyMDIxLTExLTA5VDEzOjEwOjQzKzA4OjAwIiB4bXA6TW9kaWZ5RGF0ZT0iMjAyMS0xMS0wOVQxMzoxMDo0MyswODowMCIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDoyMmU2NWRkYy00NjNlLWJmNDAtODllMy02ODA0OGMyNTk4NTEiIHhtcE1NOkRvY3VtZW50SUQ9ImFkb2JlOmRvY2lkOnBob3Rvc2hvcDo2OThiNTQzMC1lNWRiLWVmNDEtYTQxNi03ZDQwYzgzODg4NTAiIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDo4MDRkZDU2Yy1kNjZmLTNmNDItYTAxOS0wODI0MzA3MDE2ZTIiIGRjOmZvcm1hdD0iaW1hZ2UvcG5nIiBwaG90b3Nob3A6Q29sb3JNb2RlPSIzIiBwaG90b3Nob3A6SUNDUHJvZmlsZT0ic1JHQiBJRUM2MTk2Ni0yLjEiPiA8eG1wTU06SGlzdG9yeT4gPHJkZjpTZXE+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJjcmVhdGVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjgwNGRkNTZjLWQ2NmYtM2Y0Mi1hMDE5LTA4MjQzMDcwMTZlMiIgc3RFdnQ6d2hlbj0iMjAyMS0xMC0yOFQyMjozNzoyNSswODowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIDIyLjAgKFdpbmRvd3MpIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJzYXZlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDplN2M5ODI4ZC05ZjQ0LWIzNDctYWU2NS02OWU4M2UyYmViNTQiIHN0RXZ0OndoZW49IjIwMjEtMTAtMjhUMjI6Mzc6MjUrMDg6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCAyMi4wIChXaW5kb3dzKSIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6MjJlNjVkZGMtNDYzZS1iZjQwLTg5ZTMtNjgwNDhjMjU5ODUxIiBzdEV2dDp3aGVuPSIyMDIxLTExLTA5VDEzOjEwOjQzKzA4OjAwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgMjIuMCAoV2luZG93cykiIHN0RXZ0OmNoYW5nZWQ9Ii8iLz4gPC9yZGY6U2VxPiA8L3htcE1NOkhpc3Rvcnk+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+NisF3gAACmFJREFU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" />
            </div>
            <div class="title">GEEK ROS ESP8266 WIFI</div>
        </div>
        <div class="item-view">
            <div class="item">
                <span>设备平台</span>
                <span id="platform">-</span>
            </div>
            <div class="item">
                <span>AP模式IP地址</span>
                <span id="service_ip">-</span>
            </div>
            <div class="item">
                <span>STA模式IP地址</span>
                <span id="sta_ip">-</span>
            </div>
            <div class="item">
                <span>摄像头图传支持</span>
                <span id="camera">-</span>
            </div>
        </div>
        <div class="footer">
            <div class="title">Design From ESP8266-12F</div>
            <div class="title">www.geekros.com</div>
        </div>
    </div>
</body>
<script type="text/javascript">
    function start_ping(){
        let ajax = new XMLHttpRequest();
        ajax.open("get","/ping");
        ajax.send();
        ajax.onreadystatechange = function () {
            if(ajax.readyState === 4 && ajax.status === 200){
                let json_data = JSON.parse(ajax.responseText);
                document.getElementById("platform").innerHTML = json_data.data.platform;
                document.getElementById("service_ip").innerHTML = json_data.data.service_ip;
                document.getElementById("sta_ip").innerHTML = json_data.data.sta_ip;
                document.getElementById("camera").innerHTML = json_data.data.camera === false ? "false" : "true";
            }
        };
    }
    document.body.addEventListener('touchmove', function (e) {
        e.preventDefault();
    }, {passive: false});
</script>
</html>

)=====";

#endif
