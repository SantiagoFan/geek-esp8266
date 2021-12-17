/**
  ******************************************************************************
  * @file    home_html.h
  * @author  GEEKROS,  site:www.geekros.com
  ******************************************************************************
*/

#ifndef HOME_HTML
#define HOME_HTML

const char home_html[] PROGMEM = R"=====(

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
            padding: 40px 20px;
            font-size: 0;
        }
        .page-view .item-view .item{
            width: 25%;
            height: 90px;
            display: inline-block;
            vertical-align: top;
            padding: 5px;
            margin-bottom: 5px;
        }
        .page-view .item-view .item .item-box{
            width: 100%;
            height: 80px;
            background-color: #1a1c1e;
            border-radius: 6px;
            position: relative;
        }
        .page-view .item-view .item .item-box .icon{
            width: 100%;
            height: 60px;
            text-align: center;
            padding: 15px 0;
        }
        .page-view .item-view .item .item-box .icon img{
            width: 30px;
            height: 30px;
        }
        .page-view .item-view .item .item-box .title{
            width: 100%;
            height: 40px;
            line-height: 40px;
            font-size: 12px;
            text-align: center;
            position: absolute;
            left: 0;
            right: 0;
            bottom: 0;
        }
        .page-view .item-view .item .item-box .title.end{
            color: #666666;
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
            .page-view .item-view .item{
                height: 100px;
            }
            .page-view .item-view .item .item-box{
                height: 90px;
            }
            .page-view .item-view .item .item-box .icon{
                height: 70px;
                padding: 20px 0;
            }
            .page-view .item-view .item .item-box .title{
                height: 45px;
                line-height: 45px;
            }
        }
    </style>
</head>
<body>
    <div class="page-view">
        <div class="header">
            <div class="logo">
                <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAFAAAABQCAYAAACOEfKtAAAACXBIWXMAAAsTAAALEwEAmpwYAAAGvmlUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNi4wLWMwMDIgNzkuMTY0NDg4LCAyMDIwLzA3LzEwLTIyOjA2OjUzICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdEV2dD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlRXZlbnQjIiB4bWxuczpkYz0iaHR0cDovL3B1cmwub3JnL2RjL2VsZW1lbnRzLzEuMS8iIHhtbG5zOnBob3Rvc2hvcD0iaHR0cDovL25zLmFkb2JlLmNvbS9waG90b3Nob3AvMS4wLyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgMjIuMCAoV2luZG93cykiIHhtcDpDcmVhdGVEYXRlPSIyMDIxLTEwLTI4VDIyOjM3OjI1KzA4OjAwIiB4bXA6TWV0YWRhdGFEYXRlPSIyMDIxLTExLTA5VDEzOjEwOjQzKzA4OjAwIiB4bXA6TW9kaWZ5RGF0ZT0iMjAyMS0xMS0wOVQxMzoxMDo0MyswODowMCIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDoyMmU2NWRkYy00NjNlLWJmNDAtODllMy02ODA0OGMyNTk4NTEiIHhtcE1NOkRvY3VtZW50SUQ9ImFkb2JlOmRvY2lkOnBob3Rvc2hvcDo2OThiNTQzMC1lNWRiLWVmNDEtYTQxNi03ZDQwYzgzODg4NTAiIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDo4MDRkZDU2Yy1kNjZmLTNmNDItYTAxOS0wODI0MzA3MDE2ZTIiIGRjOmZvcm1hdD0iaW1hZ2UvcG5nIiBwaG90b3Nob3A6Q29sb3JNb2RlPSIzIiBwaG90b3Nob3A6SUNDUHJvZmlsZT0ic1JHQiBJRUM2MTk2Ni0yLjEiPiA8eG1wTU06SGlzdG9yeT4gPHJkZjpTZXE+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJjcmVhdGVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjgwNGRkNTZjLWQ2NmYtM2Y0Mi1hMDE5LTA4MjQzMDcwMTZlMiIgc3RFdnQ6d2hlbj0iMjAyMS0xMC0yOFQyMjozNzoyNSswODowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIDIyLjAgKFdpbmRvd3MpIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJzYXZlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDplN2M5ODI4ZC05ZjQ0LWIzNDctYWU2NS02OWU4M2UyYmViNTQiIHN0RXZ0OndoZW49IjIwMjEtMTAtMjhUMjI6Mzc6MjUrMDg6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCAyMi4wIChXaW5kb3dzKSIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6MjJlNjVkZGMtNDYzZS1iZjQwLTg5ZTMtNjgwNDhjMjU5ODUxIiBzdEV2dDp3aGVuPSIyMDIxLTExLTA5VDEzOjEwOjQzKzA4OjAwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgMjIuMCAoV2luZG93cykiIHN0RXZ0OmNoYW5nZWQ9Ii8iLz4gPC9yZGY6U2VxPiA8L3htcE1NOkhpc3Rvcnk+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+NisF3gAACmFJREFU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" />
            </div>
            <div class="title">GEEK ROS ESP8266 WIFI</div>
        </div>
        <div class="item-view">
            <div class="item">
                <div class="item-box">
                    <a href="/config">
                        <div class="icon">
                            <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAACDklEQVRoQ+2av0oDQRDGv+8BbAQbxdLKUsHWQgiCtY3W2tn4AMZnEATtrSxtRAtNr4WFFvb6Gp8sXCBEc7t7uTkvuRkIKW52d37zh53hjuiYsGO8cOB5j7hH2CM8Zx7wlJ6zgP7C8Qh7hAFIOgDQA7DaUod8AngjeRmzL5rSku4L2NhebXh+Q/KwzJBSYEk7AB7bQJJhQ4/kwyT9GPARgKuMw9qgekLyoirwGYB+GygybOiTPHfgwgOxlPYIZ6TWf6l6So963lN61BuSvIbHCvMbwGvxq1qzawB2ASxW3WBsnWkN75O8ndZQSaG5CU1OHWIHTDLai6cQSNoG8JSim6BjBwzgmOR1ghETVSQtAAhTTmnTn3GGKXCwI9RxGM+qSqjhlaqL/1hnDlyjrbVs5cDeeExKpITGI4yOA5LPZckoqcm52jSl10l+pFSepC8Ayym6U+qYAm+SDJ1WqUhaAvAOIPxbiynwXdFWDiIUewBOrUmL/U2BG2LIOsaB/Vqa4lpKHQ/D+LeVlZjVlU1TOmk8lLQB4KU6Q9ZKO+Cc8VBSGP/CGGgtdsCp42HN827MYabA4fCU8bCJyA4dYQ4c83jTzx3Y7+GSe7jJsa6u1J/qdWm3XogHl3fqk4dhjnXqo5a6Cqst+9Ty5qAtMCl2OHCKl2ZZxyM8y9FLsd0jnOKlWdbxCM9y9FJs71yEfwDtd/k9GG3EJAAAAABJRU5ErkJggg==" />
                        </div>
                        <div class="title">基本信息</div>
                    </a>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <a href="/wifi">
                        <div class="icon">
                            <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAFU0lEQVRoQ+2aa8hlUxjHf3/JpVzK3fjgkkuZXMoohFBIoSQfXKIhlxlmBgmTfKEwJobBGJOixAcTMnIJZQwjo5kPhJLbuOfSlLvcHv3f1nnbc+Y9e699zj771cx5anVOZz+X9V/PWs9l7SM2MdImhpcR4I3d4yMPjzy8ka3AaEsPw6ERsTUwBdgjffq76es0vvKnpN+HYb+os3EPR8TewEnAycB+CeAOmUDWpQX4AHgWeFnSF5myWWwDA46ILYETgRPSOCTLcj7TW8ALwGvACkl/5otuyNk34Ig4EJgFnAHsOsgkash+AzwN3CPp/Rpy46y1AUeEz+EVaWzTj9EGZH4B7vWQ5POfTdmAI8LgOkAN+v9ABtsB7kWopCzAEXFZAju1UuP6DO8C7wGfA5+l0fn+F7AzsFMane/7pmPSieQ5Jm3D3l5cxVwKOCI8mTuA86sUpec/A686ugLLJH2aKbcBW0QcA5yWwHsRcuhxYIYkR/sJqSfgiDgeWADkRN0lwPPAS5J+zZlZHZ6IcIpzcLwI2LxC1jtplqRnJuKbEHBEzAbuzpiUgS6RtCaDd2CWiDgIuDAB37ZC4TxJ13fzrAc4IqxkEXBehbJWgXbPJSK8xTvAdymZ60pJRxefdwNeDRxWomA5cE1bHq3aEilF3gxML+OVNI5z/EtE+Iw8WSL4IDC7n3o37ZzdU5nZ+bQp19IuJsY+JTno1aaIuAm4sURwuqSH/bwIeCZwXw+h6yTdXmcmEXEccGqKtPtnyjq9LHUpKWlVpswYW0RcDDgtbTaBnHels816gI8E3uhidmK3V8s8Py4SET4OFwCnALmppBcug3d6eyT3CEWE7d4P7NmldGqnFO0+w+5yvD32AZ6yxyW9U7XSCeglgMcwKDtIpkjuM30O8DFwgyTHnjHKqrR6IYiIg4HLhwi027SBL5L0dr+r2jfgiDgbuBPYrV/jfcp9BzimjAWhutQX4Ii4BZibaezLVG465a0tDIvvVRiu6Bzo/FsOLZQ0J4exyFMLcEQ42joSuuwsI1dejzoI9hFtD03AXfyU1QS2v8LHSZJvSLKoLuAHKs6rgbrU9FkbmCKiEwjLgNvepbnG6gL2+XEbNxHNlXRbruE6fBHhmvjWHjLrJO2Yq68u4JXAUV3KfwRmSnos12g/fBHhNOM6f/su+VWSjsjVWRew77AWFpR7C18p6fUqgxGxVcrvzvEeWwDfpvGmpJ8ydLgRcGY4vMA7XlRUyft5LcAWSLnXt5SfSHJx0pMiwtv/rDQcgcvoxVTp+Uy6vi7Ta12+RLR3a7WmtQHnrGJaGNfeM4C6F31uJBz05kv6LddeLl/jgCPigHR54FuKQcj30FfV9WCVwUYBR4S7I+ff7aoMZz7/IQVEd1CNUNOAX0lFQyOTKyiZUnWucw02Bjhdu3zYw/AfgHO0L9jM48ro3/TuyW2kh3OtI/lENK2prd0Y4BSonku9cHHSTxisJNfSZZF3WgJ9ZhfTGkl+1gg1Ddj99HzAbaOvbZdKeqjOTCPCvaxbTpeTbjbmSFpWR0cZb6OAO4a8vSV9NMgk0xXRaklZr1BybQ0FcK7xyeAbAR72qkeE3/8cC/wDOCCdPmybRf2tejgivk9vCotzWCvJf5NohVoDHBHzgGt7oFog6eo2ELcJuKwKWy6p6tqokfVoE/Bdzqk9Zr1YkjuroVObgN3D2ssTUa0mfpBVaQ2wJ5n++eMo3fnrhHvfc4tvBgYBkyPbKuAE2v/K8x/W/k63Jm4sWqPWAbeGrIehEeDJ9sCw7Y88POwVnmz9Iw9PtgeGbX/k4WGv8GTr/w8LP5RMckyCrAAAAABJRU5ErkJggg==" />
                        </div>
                        <div class="title">WiFi配置</div>
                    </a>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <a href="/remote_control">
                        <div class="icon">
                            <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAE5klEQVRoQ+2aa8hmUxTHf/8vrhFfJA25ZMg9qUkU4zqlESaKENNgPuCLifDBKJfMNLnMlLxuE2nkMi4pjOT1YdBEMZgJE0I0X2QQiVpaT+d5nGe/55xn72fm3fMcz7vq9Nb77Mv6nXX22mutvcWYicaMlxng/7vFR9rCZnY6cEdghElJdw5rmDYAvxPALZ0BTjD3qFt4EfDoOFn4SeCqAHihJP//UDKyFjaze4BbK6jOkvT2ULSwc/fhwgvPAvzZtYA4GHDv7H+rZLakr1oFbGa+1VwGzE5UfAtwjKS/Evv1mmf/pM1sAfDCkArPl/TakH073bICm9luwOfAoYlK/ww8tD37b3e+3MBHAptrYB1qLfBDxe8rJP2e+JIqm+cGnge8XqHJMsAjqD93BFTTGLmBrwdWBgqtkeQOLIvkBnbvvDQgWyJpRRbaneC0qoAXSXp8nIAXSHJnlUVyf9IeQU0RSZNZaHN/0rmgRsZLtxbYzE4A/DkKOBrYIyPMpiJa2zTMUohew2Z2NnA5cEaR3WRkrJ3qN+ANfyQ9EaPQQGAzOxC4GfCgYZTlFWC5pPVDr2EzOxnwN+cxcFvkEknP1ylba2EzOw94Gti3LaQlPWuhK4HN7CTAyyh7txDWVf4VOFPSh6H+dcDuCM5tKWxX7TcleXbWJ1OAi/JLGOC3lX1K0b4P2Mz8E/4YOCSS8CPgH2BOZPvtbeaGSDGGFxXmSPJaWEdC4Bu8lBKp1SpJ3h4zu7CoVkR2TW62RdLh3V5m9k1DVTMcfKWkG+uA3wN8K4qRgyR9X1LC3+JhMR2HaNOntJk9AlybME5P156FzWw/YGvsIJLCr8MPvSqzodgxG9q9LMm/oo6YWepcl0p6tu+TLvbd6BJoZuBfgOeANcBpwE3AXgkvsrf8yha+rwgho8bJDBylU0Oj9ZJODS38InBRTSdf27eXfwszleLYpNvEj0m8nFN3XNIE4JXLJR44NOhT7r8aeHfAfJsleWb3n5c2s0+A4yo02Sjp+NRXbGZ+jPJFaj/gHElvFWvVwZc3jOHJgic2vq6b5tsqaf8Q+A9g94rB5w6Tdw7pXPw6w9yyDmZmDcB9ujU4s78l7RICfwd4KhjKRmCepJ9SrGVmHox8kNKnaNsL/CO2nwlJ1xUvt2m+bZL2CYHXAZ7kV8k24P5gDfddLClC0vIaDg+yU9h9XZ5Ys8TCcb4FvAjYNN/XkjoxQtlL+4lAdJLfMi+9QVIn/C0DXwE8FWuGzMBuxXslTZjZxcADwAGxunpeL+nKENhN3guyBw2WGXi1pKu7OpnZq8D8QTqWfl8sycPRKcnDp37CHjnQLZL81G/QlhA5XGOzZyR5AbEjZvYScEHCwMdK+qwK+K4wwBgw6IOAXz/o7IXTKJ7m+ZHMZBHgOHDH60bIWkl+66AjYQLgm7fnw1X7ccTY097EvXFqgtK3V1dVPB4GFk+76nkmeEzSNeWpqoD9CpEX8FJv2ORBiJ/ly6KQ13eFoq6I567f07E2S2WptqkufRtwd0uJa2/cNh61mJl//xMtg268XhxztnR+se2cMuLgXl9bJmlVk54Dgbudzcz32oXAESMG/mNRMXXYXlGxTsdo4BK4nwv7XuhFAT8b9krCnhlfgt/k654Rr5P0fsrcycApg49i2xngUbTKjtRp7Cz8LxYro0yNe4xHAAAAAElFTkSuQmCC" />
                        </div>
                        <div class="title">虚拟遥控器</div>
                    </a>
                </div>
            </div>
			<div class="item">
                <div class="item-box">
                    <a href="/mqtt">
                        <div class="icon">
                            <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAAAXNSR0IArs4c6QAABKBJREFUaEPtmlvIpVMYx/9/RQ6JC8oxkSiKCZO5cj5NcaNcOCSnRhFmhsEdLjHMGOPM4EaRcogc43OB5ELKhSkihwsNIqW48Ndfzx5v+3v3ftdae+1v76+9V319F/t5nvX81vOsw7vWQ8xY44zxYkmBJa0EcAKAJ0j+M4nBHjuwpD0AXAPgagDHNyCfAfAkyQ+XEnxswJJOD8hLO4C+NDiAR0j+OW74qsCS9o9oXgvgsALnX4yov1Wgm6RSBVjSBQDWADg/qdduoR8j6ltI/totni5RDCzp8IjmTQD2Su8yW9LRdrq/kq3ZopANLOliADcCWFXDgQwbv3t1B7CZpDOgqCUBSzoOwPWRtkUdAdgB4GkAnwG4CsDZpYYAfATA6f58ro2BwJJ2AXAdAKfskbmGG/IvAdhG8rWmDUmHBviVhQuczXkvfzii/nWKj4uAJZ0SkBemGBggsx3AY44oyd+67Eg6M+Av6ZId8vvnADaRfHaYjZ3Aku4AsBbAviN0asinSH5aYkPS7o2on1RiI3Tsgw87i1o/8J0FnXwMYCvJ5wp0B6rEuuG57r+9M20vkPTBpxqwT0QPxHbxfaYz2eKSLgLgub46Ubka8OsGJflOYsdVxSQdGBF31I8YYnwk4B8imt4G/q5KMIIxSacNXZzIhdKUHjhaI/g7MdWURWsOPLHwVOi4KMIxf95vnSNk0nE11/c4J5Rsm72u/svUOXDLyC+aw/MIN0aJ85TOna3t8vM5nD+Oy27RajtZnQqgbeX2Keuu/jEhuTCxVVrSMQCOBeD/vgXZTtLf0cltSJqPdJauukpL8u3JlgFfPr6U30DSn5ydbeqBJV0R91pdMOtJbuoSmmrg+KZ9oQui8fsqkp8Mk59aYEmHxDzdLwP4WwAnDruIn2bguwHcmgHbE91IcsMgvWkGfhWAn2Ny29skz12OwH4pOCiXFsBPJA+YA8cIzFP6/1SY7MFD0swtWrO1LTnTZurg0Ztay/ZoGRHbJx7ffKDYswfVdeOxLD8e+vdFSX76uAHAii7gRrSn9vPQPv4BwCvtvcOeWyStJvlGwQEjS0XSZQBuj+/pNt2RtqV+g9sA3JP7sZ5F1CIsadeA9Nm66/m0KnDPHV+jGHysEZV0FIDb4tUwddzGAtzr/LsAfyjVmxQ5Sef49gPAWSnyfTLdwLHyulLHnZRU0dnEffF+XPxILslVfOsAHF0AapWNXm9I/tym3/oOJOmMAD+vsFNX7vjh/IMUfUmuK7klQHducSm6IeMKHk+vx7t0hj58SToYwM3hSJettt9dWeNCMlfOLmqSVoTty0uMA3gzQFsf9pIjPMA511I63UtqtrytbY6o/xK1mU7b1sKTBPitkbauTshq2U+b8ZC2vvAGw859VTho30S2+Iq3uGUD93qKdHfNpaNebCfB83cB3F9r+6viqCQXgTlFfVys1R71qk/SGVGtVQFuRN3vPz5Tl5Ytek93tZC3t7G0qsAt6e5Sxt0SPH8PwIMkX06QHUlkLMBNjyLdHXWXIPc31z87ol+MRJGhPHbglnQ/OR7TfDD5K8PXKqJLBlzF2wpGZg74X6dNvFtQIbElAAAAAElFTkSuQmCC" />
                        </div>
                        <div class="title">MQTT配置</div>
                    </a>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <div class="icon">
                        <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAACpElEQVRoQ+2YPYxOQRSGn7cVEaVEgkIiOjpiCxI/jdXZSoXKhkgQhcJqRITCb4VOYyuhECuxBREaCo1E4ifRqERCe2SS+ZLrfvfuzF6+uV92z01uc+edM+c97zlzZ45YZo+WGV+c8FJX3BV2hZdYBDyll5igQ3RcYVe4EgEzOw9sAVaPSWB+AO8kXcj1JzulzewucDjXcGHcPUlHctbMImxm+4AnOQZ7xExKepxaP5fwGeByyljP47OSplI+5BIOtTuTMtbz+LykXSkfnHBThOLu7Aqn0qfwuKd0U8C9hr2GAd+0Cu9Gmcv5puWbFuT1pTNreBYI70ZgEtjekoqPgMEhf3/ENkFfAQH7ETgY34Wyu2hKz1TvpGa2FXgBrKh5+FLSRPWbmQXcjhruNzAh6e3ge0bQyxGWNPQ/N7OnwJ4akb8CE8ZaiMxJ2luX08xsAYl7J/ygIQ2nJd2uKXwMuFUj0njVGxvCwFVJpyvptw740qDGkApm9hzY2YBdL+lrxeYV4NRYKByduBPvzCGNw/15Q4tz88CgBxVwTWTD1M8RNxftHk38j8uldObBYNQwJ+wHj/988Bh1yqbse0p7SntKt1RJxjk2VV8lxr2GvYa9httr+ADwsEQh/sMahyTdT83P6kvHe2vT/TZlv9R44/25cw1HwmuB68BuYFUpJol1fgLPgBOSvuX4lK1wjrEmjJkdj4HKMREcv5ED7IoZOeGYHTeB6YST1ySd7Eokd14pwpuBN8DKFse+A9skfcp1vCuuCOGo8iXgbIuj5yRd7EpiMfNKEg59rtfAmpqD76O6vxbjeFdsMcJR5dBQD93M6jMlKTTwizxFCUfSod+8KbL7ICn834s9xQkXY9aykBPuW4FRr+8KjzrCfdt3hftWYNTr/wFxrCBMqerCjQAAAABJRU5ErkJggg==" />
                    </div>
                    <div class="title">串口消息</div>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <div class="icon">
                        <img src="data:image/png;base64,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" />
                    </div>
                    <div class="title">贴身跟随</div>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <div class="icon">
                        <img src="data:image/png;base64,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" />
                    </div>
                    <div class="title">路径规划</div>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <div class="icon">
                        <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAEM0lEQVRoQ+2aSayeYxTHf/+IBRHzRkOEEFOxoI2NKQi6MDW60JoSbSNBBEFs1EJoYojUgmqCGBYaLRZKCBUb04aqEMKCsDJG2JAjp557c2/v933veYb3u0nvd5K7umf6PecZz/uJBSZaYLxMgPf0ik8qPKnwHjYCY5vSZnYOcPCMPx/KX6b+JG0fx9j2CmxmFwHnAyuAIzqAvgdeAt6W9EZf8L0Am9nJwO3AtYWJPws8LGlHof1Qs+bAZnYvcAewX2WyfwIPSbqv0s8s86bAZuZT8cKWCQJvSvKl0USaAZvZ78D+TbKa6+QPSQe08N0E2MzeSptTi5yG+fDN7ILaANXAZvYgcFdtIkH79ZLuDuoOVKsCNrMrgJdrEiiwXS5pS4HdLpNa4HcBv1CMU7ZLOrc0YDGwmd0APJUR+APgOeALYGeyOwk4EbgaOCPD12pJmzL0p1VrgF8HLg4G3SRp9ShdM/PB80GMyDZJyyKKu+sUAZuZ34l/DgZcIWlzRNfMrkzXy4j6IZL8Lp4lpcArgecDkR6XdHNAb1rFzDYANwVsVkl6IaA3S6UUeD1wZ0ewv4HjJPmjICxm5o+Mr4B9Oow2SLol7DgplgJH1ttnkk7NTcj1zexT4JQO26J1XArsZ6+fwaNki6TlhcAR/99IOjbXfylw5PxdV/rSSS+udV0wkrLzzzZIUy4ypTdL8od/tpiZNwJ8xx4lH0rKObt3+SoF9vvsAx0J7ZS0OJv2/zX8OeCXklEy1k3rKiByJCyTtC0H2sz8MuOXmi5ZK2ljl9Lu/y+t8BLgo0Cw7I3FzL4Gjgn4Xirp44DeLJUi4LSOXwUuCQR8RtL1AT2fyk8D1wV0X5N0aUBvjkoNcHRae9BXgNskfTcoSTM7CngEuCwIsVLSi0HdZhXeC/DN5fhg4N+ArWkpeIfExTsYS4HLgQODfr4EFkv6N6jfBjhNa+9Qdp6XJYmNsCk+391n8ZROwIcBnwCLGkMNc/cjcLqkn0rjVQHPQ5Wrqltd4TFXubq6TYDHWOXq6rYEPgh4D/BvSn2If2M6W9Kvtc6r1/BUApntmdy8w22iLsfNgNPUfhJY0xU08/8bJa3NtBmq3hr48DS1j26U4LdpKv/QyF/dOTwoCTNblfrPLXK8RpL3sptJ0wrPWM/3A/dUZvmYpFsrfcwx7wU4redIX2oYz/uSzmoN2+xYGjK1jwT88X9CZuJ/AUsk+SeZ5tJbhVOV/dcAuT9QuVHSE81Jk8NegRO0r8NHgwDhZkHQ3/jW8MxIZhY5n3dI6mq+l3JO2/Ve4VTlfdPUPnNExntL+qeaqMPBWIAT9GkJ+tABOZ0n6Z2+YXvdpYfs3IM+hzZ5BUUHa2wVnkrIzPxDtvewXLZKivSgozydemMH7syoZ4UJcM8DPO/uJxWe9xL0nMCkwj0P8Ly7X3AV/g+EVjdMPGYh6AAAAABJRU5ErkJggg==" />
                    </div>
                    <div class="title">位置定位</div>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <div class="icon">
                        <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAC0UlEQVRoQ+2au4sUQRCHv98foIGgiRgIPsDDB/jCSC8SwQsVxEQUXNBMRU3EMxIDMVLwQA0FFUxEzdxMfAUKihwqgmaHpoYlpbPHwO3e9PYMO81eNyzLbj/m93XVdNfUtFhiRUuMlww87hbPFs4WHrMZyC49ZgZdgDOUhc1sJ7AZWJPIxHwDPkt6E6onGNjMLgPToQOPuN20pCsh1wwCNrMtwPuQAVtss1XSh6rrhwKfAm5WDdZy/WlJt6o0hAKn7M49xiC3zsD9XCLxBStbeLH7OLt0Ay7dBfb1Gce3jN9Vq2if+vXA6oB+rSxak5K6ZrYJeAxsKISek3Q9QPSCJma2DLgNHKnoP3LgWUkbe6LM7B5wrPi9VtL3GGDvY2Y+jo+3WBk58B9gm6TZQuRT4EChcErSkxrA54FrqQG7no/AQ2AK2F4S+BN4WdQPy70H8M/yFIGHhWmy/chduknxMWNl4H6zlgOPBgKPGHdsok8rLu3BhW8/e4EzpZX1PvAoMtJaBxwdEL2VJ2rkwHPAhCT/9mDhObC/UHRYkm9XUcXMrgIXU9uW5iStKkVaD4BDxe8dkt5F0f6fvJCMy8gt7Dwzkjp9np+fAZdioM3sIHADcNdOKrSMNWBT/VqxcFPiY8bJwDnwgLATADmJN/gOewX4iuwpnnKa50vx/6+Im9NTPP5cvSLFVXp+vzWzt6Vn4o6kmQjYf13MzFM8J1MD7kqaLAUe828rJAU9pAwCMjP3lhepAbueXhLPsx3+Lmp3ITLawma2ErgAnE0R2DUNStN+BX5EuPUE4NBVJe/DeR/O+/CAuyQHHlXLRzv1jS5ax4E77XAEX/WEpLtVrYMCguK40uuqwVqu3xVyfCkIuAjvUj7nEeTOzhEMXED78aUO4K9DUyif/FVqyHGlntihgFMgrKshA9edwdT7ZwunbqG6+rKF685g6v2zhVO3UF19fwHWI0VM+FiOBwAAAABJRU5ErkJggg==" />
                    </div>
                    <div class="title">设备管理</div>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <div class="icon">
                        <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAAE30lEQVRoQ+2ZW6hVVRSG/0FgZRR0eciS7hBkElk9GEZFF6ILFJFdrRTTh0of7KUn7S0Kggwq7GIPlVnRBeulgnyQqFRQSUWIgoqudH0povjjz7li7tVea4659tpru8/ZEw4cOGOOOb415hzjn/MYptmwacaLCfBUz/gkw5MMt/wFSF4P4DoA3wN4zcy2tLxErbtOtjTJ2QBuAnAzgHmliN4C8IKZvdQF+FCBSV4QIAV7ZAJoB4AXA/zXw4JvHZjkjCibVzQI/McI/KMG87vZ0iRPj0D1exvjdcGb2attOJOPgTNMUlnU2dS2VXaHMbZFWVexazwaAZPUeSyKkM5pV+M7nfGQ9e1NFs0CJqkKW2RTlXeU45VQ4N7MCcIFHHqnQNVDD7TxYZT1n1LBVQInemfK7yj+/lV0zndVBdAXmOTj4YymeucowDxrbgjb/e2y8f+ASb4M4AaP1zGwWWNmD8Rx9gCTPBbAN2MA4g1xt5mdWQd8FAApnakytpvZuZXA+gPJ1QDWTBHihWam9vXfqCpaiwHcAuDSMQQngOcBbDSzdNGKAUleEoSG4A89wOH3AtAVU6D7stpS2ZjkyQAWhay3dTFo6/ttikD/Tjl1Ka1S1u8I4JennA/x738BeEygZvZxzjrZwIVzkucBuCvAH5az6AC2nwB4IoAmZWS/dRoDR+C6Et4H4FYAZwwAUzdV9+GnzOydQf33U1oKWkprDoD3AWwws188C5G8EsC9AJq8dJSX+BPAQwDWm9lnzvWPCB9+IYBHAWwux94P+BkAS6IFvhR0ANe7U3KQPB7AKgBLARyenNBrsBPAw2ame69rkFSStMP0c2I0KSktjwHwQ80q0tnK+BuuSPYLGRU5wc9NzNkYQN0Xe5IqnIK8vcJ3a9JSlVFZf9LM/vDAkzwrnPXbIvvfw7Z9xMx+c/o5OEDKz8WJOa1LS70vCXydme3xBCybIF9RvsnUzSd5agBdDuA451pZ0lIvHJc5HctMTy1Pm5ke1lsbJC8EcGf48fiV+FAS1KOzpeVF0WOdKqBnqOg8a2ZrPcZVNiR1Nu8GMN/p59MItHK3ufowyROCplbWdRY941cAzwFYm9FW9DAoMXMPAF1VPePdqIsk64kLOF6VpHqcwK/1RBNspHcF/l6/OSQXBMgbnT5V4Iptu9k551+zbODCeZCWxdv0LOeiuwP4OtmTVL9XNs92ztdxKTTBF845PWaNgSPwo6Ptfr4zCLUj3VtnOu3V99X/pQMGGm1Ly6uiInfQQJHtf1srtu1Wj6/wH5EVAFRs3dJyfakFNJGWknrFdj/NE2xk80G0bV3vayTPASDQsuJ60Mzuj9cvv1qeBODzmgCzpCXJQ6LtXtfTa3tnVTwkdckRqIpev/GtmfXUlzKwApR6Sgn+JtKyX0939c5Sl1CMKwNoSnHpttQjP/ud4ZxXy2xpGXq6ro8/A9iUocV1TAS6LOOIjKW0vDqAel9Qx1Za6mwqo6c4M+o6Hq4+3KG0FFwB6uTEWEpLbVeBXuOkHFtpqQIkUL2fecZYS0sBev+bMTxp6fnMNUJgpNLSE7uraHkclcRBp9IyJ76hABcBDFta5oAWtkMFLmW9FWnZBLLy8jCoM8/8ptLS49tj01mGPcF0YTMB7uIrj3KNSYZH+fW7WHvaZfgfJQLwTOn56SwAAAAASUVORK5CYII=" />
                    </div>
                    <div class="title">固件升级</div>
                </div>
            </div>
            <div class="item">
                <div class="item-box">
                    <div class="icon">
                        <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADwAAAA8CAYAAAA6/NlyAAABUUlEQVRoQ+2VMUoEURBEqyNv4xmmwRsIgohgYCJ4B9czmAgGGoiJ4BGmIw/hJTyB8GWDTdRxp9YVtvvXxtX8rno1vYbOftaZX8hwdeIiLMLFElCliwH9ZkeERbhYAqp0MaA6Wqq0Kl0sAVW6GFBdaVValS6WgCpdDOh2rnREXJnZfmvtHcCruz/MDSoiTgAcAPjYdLa1tmdmb+5+PffdlY6udES0Hx55dvejdY9HxA2Ayy+6v8zC3SkPlHhJFsBiwtiFu99OmY6IMwD3/zC7YEhThsdxfDKz44mlH9399BfDdwDOtz1rZi/DMByua9dGle7OcHeVXtaiq6O1+g66+luaexx2VUdd6V01wewlw0xaGbUinJEas7MIM2ll1IpwRmrMziLMpJVRK8IZqTE7izCTVkatCGekxuwswkxaGbUinJEas7MIM2ll1IpwRmrMzp/cMYY97N3+KwAAAABJRU5ErkJggg==" />
                    </div>
                    <div class="title end">敬请期待</div>
                </div>
            </div>
        </div>
        <div class="footer">
            <div class="title">Design From ESP8266-12F</div>
            <div class="title">www.geekros.com</div>
        </div>
    </div>
</body>
<script type="text/javascript">
    document.body.addEventListener('touchmove', function (e) {
        e.preventDefault();
    }, {passive: false});
</script>
</html>


)=====";

#endif
