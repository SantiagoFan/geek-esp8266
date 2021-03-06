/**
  ******************************************************************************
  * @file    remote_control.h
  * @author  GEEKROS,  site:www.geekros.com
  ******************************************************************************
*/

#ifndef REMOTE_CONTROL
#define REMOTE_CONTROL

const char remote_control_html[] PROGMEM = R"=====(

<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=no">
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
            background-color: #2a2c2e;
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
            padding: 30px 20px;
        }
        .page-view .item-view .rocker-head{
            width: 100%;
            margin-bottom: 15px;
            font-size: 0;
        }
        .page-view .item-view .rocker-head .rocker-head-item{
            width: 50%;
            height: 60px;
            display: inline-block;
            vertical-align: top;
            padding: 0 15px;
            position: relative;
            padding-top: 20px;
        }
        .page-view .item-view .rocker-head .rocker-head-item span{
            width: 100%;
            height: 20px;
            line-height: 20px;
            position: absolute;
            top: 0;
            left: 0;
            right: 0;
            font-size: 12px;
            text-align: center;
            color: #666666;
        }
        .page-view .item-view .rocker-head .rocker-head-item .item{
            width: 33.3333%;
            height: 35px;
            line-height: 35px;
            display: inline-block;
            vertical-align: top;
            background-color: rgba(0, 0, 0, .5);
            font-size: 12px;
            text-align: center;
        }
        .page-view .item-view .rocker-head .rocker-head-item .item.select{
            background-color: #67C23A;
            color: #f9f9f9;
        }
        .page-view .item-view .rocker-head .rocker-head-item .item:first-child{
            border-radius: 4px 0 0 4px;
        }
        .page-view .item-view .rocker-head .rocker-head-item .item:last-child{
            border-radius: 0 4px 4px 0;
        }
        .page-view .item-view .rocker-mode{
            width: 100%;
            height: 40px;
            margin-bottom: 40px;
            font-size: 0;
        }
        .page-view .item-view .rocker-mode .item{
            width: 50%;
            height: 40px;
            display: inline-block;
            vertical-align: top;
            padding: 0 25px;
        }
        .page-view .item-view .rocker-mode .item .item-select{
            width: 100%;
            height: 40px;
            line-height: 40px;
            background-color: rgba(0, 0, 0, .3);
            border-radius: 20px;
            text-align: center;
            font-size: 12px;
            color: #666666;
        }
        .page-view .item-view .rocker-mode .item .item-select.select{
            background-color: #E6A23C;
            color: #f9f9f9;
        }
        .page-view .item-view .rocker-item{
            width: 160px;
            height: 160px;
            position: relative;
            margin: 0 auto;
        }
        .page-view .item-view .rocker-item .back{
            background-color: rgba(0, 0, 0, .6) !important;
        }
        .page-view .item-view .rocker-item .front{
            background-color: #409EFF !important;
            opacity: 1 !important;
        }
        .page-view .item-view .rocker-data-show{
            width: 100%;
            height: 30px;
            font-size: 0;
            text-align: center;
            padding: 0 50px;
            margin-top: 15px;
        }
        .page-view .item-view .rocker-data-show .item{
            width: 50%;
            height: 30px;
            display: inline-block;
            vertical-align: top;
            padding: 0 15px;
        }
        .page-view .item-view .rocker-data-show .item .x, .page-view .item-view .rocker-data-show .item .y{
            width: 100%;
            height: 30px;
            line-height: 30px;
            text-align: center;
            font-size: 12px;
            color: #666666;
            background-color: rgba(0, 0, 0, .4);
            border-radius: 4px;
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
    <script type="text/javascript">
        !function(t,i){"object"==typeof exports&&"object"==typeof module?module.exports=i():"function"==typeof define&&define.amd?define("geek_control",[],i):"object"==typeof exports?exports.geek_control=i():t.geek_control=i()}(window,function(){return o={},n.m=e=[function(t,i,e){"use strict";e.r(i);function v(t,i){var e=i.x-t.x,t=i.y-t.y;return Math.sqrt(e*e+t*t)}function b(t){return t*(Math.PI/180)}function n(t){h.has(t)&&clearTimeout(h.get(t)),h.set(t,setTimeout(t,100))}function s(t,i,e){for(var o,n=i.split(/[ ,]+/g),s=0;s<n.length;s+=1)o=n[s],t.addEventListener?t.addEventListener(o,e,!1):t.attachEvent&&t.attachEvent(o,e)}function o(t,i,e){for(var o,n=i.split(/[ ,]+/g),s=0;s<n.length;s+=1)o=n[s],t.removeEventListener?t.removeEventListener(o,e):t.detachEvent&&t.detachEvent(o,e)}function r(t){return t.preventDefault(),t.type.match(/^touch/)?t.changedTouches:t}function d(){return{x:void 0!==window.pageXOffset?window.pageXOffset:(document.documentElement||document.body.parentNode||document.body).scrollLeft,y:void 0!==window.pageYOffset?window.pageYOffset:(document.documentElement||document.body.parentNode||document.body).scrollTop}}function x(t,i){i.top||i.right||i.bottom||i.left?(t.style.top=i.top,t.style.right=i.right,t.style.bottom=i.bottom,t.style.left=i.left):(t.style.left=i.x+"px",t.style.top=i.y+"px")}function p(t,i,e){var o,n=u(t);for(o in n)if(n.hasOwnProperty(o))if("string"==typeof i)n[o]=i+" "+e;else{for(var s="",r=0,d=i.length;r<d;r+=1)s+=i[r]+" "+e+", ";n[o]=s.slice(0,-2)}return n}function a(t,i){for(var e in i)i.hasOwnProperty(e)&&(t[e]=i[e]);return t}function c(t,i){if(t.length)for(var e=0,o=t.length;e<o;e+=1)i(t[e]);else i(t)}var l,h=new Map,u=function(i){var e={};return e[i]="",["webkit","Moz","o"].forEach(function(t){e[t+i.charAt(0).toUpperCase()+i.slice(1)]=""}),e},f=!!("ontouchstart"in window),y=!!window.PointerEvent,m=!!window.MSPointerEvent,e={start:"mousedown",move:"mousemove",end:"mouseup"},g={};function O(){}y?l={start:"pointerdown",move:"pointermove",end:"pointerup, pointercancel"}:m?l={start:"MSPointerDown",move:"MSPointerMove",end:"MSPointerUp"}:f?(l={start:"touchstart",move:"touchmove",end:"touchend, touchcancel"},g=e):l=e,O.prototype.on=function(t,i){var e,o=t.split(/[ ,]+/g);this._handlers_=this._handlers_||{};for(var n=0;n<o.length;n+=1)e=o[n],this._handlers_[e]=this._handlers_[e]||[],this._handlers_[e].push(i);return this},O.prototype.off=function(t,i){return this._handlers_=this._handlers_||{},void 0===t?this._handlers_={}:void 0===i?this._handlers_[t]=null:this._handlers_[t]&&0<=this._handlers_[t].indexOf(i)&&this._handlers_[t].splice(this._handlers_[t].indexOf(i),1),this},O.prototype.trigger=function(t,i){var e,o=this,n=t.split(/[ ,]+/g);o._handlers_=o._handlers_||{};for(var s=0;s<n.length;s+=1)e=n[s],o._handlers_[e]&&o._handlers_[e].length&&o._handlers_[e].forEach(function(t){t.call(o,{type:e,target:o},i)})},O.prototype.config=function(t){this.options=this.defaults||{},t&&(this.options=function(t,i){var e,o={};for(e in t)t.hasOwnProperty(e)&&i.hasOwnProperty(e)?o[e]=i[e]:t.hasOwnProperty(e)&&(o[e]=t[e]);return o}(this.options,t))},O.prototype.bindEvt=function(t,i){var e=this;return e._domHandlers_=e._domHandlers_||{},e._domHandlers_[i]=function(){"function"==typeof e["on"+i]?e["on"+i].apply(e,arguments):console.warn('[WARNING] : Missing "on'+i+'" handler.')},s(t,l[i],e._domHandlers_[i]),g[i]&&s(t,g[i],e._domHandlers_[i]),e},O.prototype.unbindEvt=function(t,i){return this._domHandlers_=this._domHandlers_||{},o(t,l[i],this._domHandlers_[i]),g[i]&&o(t,g[i],this._domHandlers_[i]),delete this._domHandlers_[i],this};e=O;function w(t,i){return this.identifier=i.identifier,this.position=i.position,this.frontPosition=i.frontPosition,this.collection=t,this.defaults={size:100,threshold:.1,color:"white",fadeTime:250,dataOnly:!1,restJoystick:!0,restOpacity:.5,mode:"dynamic",zone:document.body,lockX:!1,lockY:!1,shape:"circle"},this.config(i),"dynamic"===this.options.mode&&(this.options.restOpacity=0),this.id=w.id,w.id+=1,this.buildEl().stylize(),this.instance={el:this.ui.el,on:this.on.bind(this),off:this.off.bind(this),show:this.show.bind(this),hide:this.hide.bind(this),add:this.addToDom.bind(this),remove:this.removeFromDom.bind(this),destroy:this.destroy.bind(this),setPosition:this.setPosition.bind(this),resetDirection:this.resetDirection.bind(this),computeDirection:this.computeDirection.bind(this),trigger:this.trigger.bind(this),position:this.position,frontPosition:this.frontPosition,ui:this.ui,identifier:this.identifier,id:this.id,options:this.options},this.instance}w.prototype=new e,(w.constructor=w).id=0,w.prototype.buildEl=function(t){return this.ui={},this.options.dataOnly||(this.ui.el=document.createElement("div"),this.ui.back=document.createElement("div"),this.ui.front=document.createElement("div"),this.ui.el.className="nipple collection_"+this.collection.id,this.ui.back.className="back",this.ui.front.className="front",this.ui.el.setAttribute("id","nipple_"+this.collection.id+"_"+this.id),this.ui.el.appendChild(this.ui.back),this.ui.el.appendChild(this.ui.front)),this},w.prototype.stylize=function(){if(this.options.dataOnly)return this;var t=this.options.fadeTime+"ms",i=function(){var t,i=u("borderRadius");for(t in i)i.hasOwnProperty(t)&&(i[t]="50%");return i}(),e=p("transition","opacity",t),t={};return t.el={position:"absolute",opacity:this.options.restOpacity,display:"block",zIndex:999},t.back={position:"absolute",display:"block",width:this.options.size+"px",height:this.options.size+"px",marginLeft:-this.options.size/2+"px",marginTop:-this.options.size/2+"px",background:this.options.color,opacity:".5"},t.front={width:this.options.size/2+"px",height:this.options.size/2+"px",position:"absolute",display:"block",marginLeft:-this.options.size/4+"px",marginTop:-this.options.size/4+"px",background:this.options.color,opacity:".5"},a(t.el,e),"circle"===this.options.shape&&a(t.back,i),a(t.front,i),this.applyStyles(t),this},w.prototype.applyStyles=function(t){for(var i in this.ui)if(this.ui.hasOwnProperty(i))for(var e in t[i])this.ui[i].style[e]=t[i][e];return this},w.prototype.addToDom=function(){return this.options.dataOnly||document.body.contains(this.ui.el)||this.options.zone.appendChild(this.ui.el),this},w.prototype.removeFromDom=function(){return this.options.dataOnly||!document.body.contains(this.ui.el)||this.options.zone.removeChild(this.ui.el),this},w.prototype.destroy=function(){clearTimeout(this.removeTimeout),clearTimeout(this.showTimeout),clearTimeout(this.restTimeout),this.trigger("destroyed",this.instance),this.removeFromDom(),this.off()},w.prototype.show=function(t){var i=this;return i.options.dataOnly||(clearTimeout(i.removeTimeout),clearTimeout(i.showTimeout),clearTimeout(i.restTimeout),i.addToDom(),i.restCallback(),setTimeout(function(){i.ui.el.style.opacity=1},0),i.showTimeout=setTimeout(function(){i.trigger("shown",i.instance),"function"==typeof t&&t.call(this)},i.options.fadeTime)),i},w.prototype.hide=function(i){var e=this;return e.options.dataOnly||(e.ui.el.style.opacity=e.options.restOpacity,clearTimeout(e.removeTimeout),clearTimeout(e.showTimeout),clearTimeout(e.restTimeout),e.removeTimeout=setTimeout(function(){var t="dynamic"===e.options.mode?"none":"block";e.ui.el.style.display=t,"function"==typeof i&&i.call(e),e.trigger("hidden",e.instance)},e.options.fadeTime),e.options.restJoystick&&e.setPosition(i,{x:0,y:0})),e},w.prototype.setPosition=function(t,i){var e=this;e.frontPosition={x:i.x,y:i.y};var o=e.options.fadeTime+"ms",i={};i.front=p("transition",["top","left"],o);o={front:{}};o.front={left:e.frontPosition.x+"px",top:e.frontPosition.y+"px"},e.applyStyles(i),e.applyStyles(o),e.restTimeout=setTimeout(function(){"function"==typeof t&&t.call(e),e.restCallback()},e.options.fadeTime)},w.prototype.restCallback=function(){var t={};t.front=p("transition","none",""),this.applyStyles(t),this.trigger("rested",this.instance)},w.prototype.resetDirection=function(){this.direction={x:!1,y:!1,angle:!1}},w.prototype.computeDirection=function(t){var i,e,o,n=t.angle.radian,s=Math.PI/4,r=Math.PI/2;if(s<n&&n<3*s&&!t.lockX?i="up":-s<n&&n<=s&&!t.lockY?i="left":3*-s<n&&n<=-s&&!t.lockX?i="down":t.lockY||(i="right"),t.lockY||(e=-r<n&&n<r?"left":"right"),t.lockX||(o=0<n?"up":"down"),t.force>this.options.threshold){var d,p={};for(d in this.direction)this.direction.hasOwnProperty(d)&&(p[d]=this.direction[d]);var a={};for(d in this.direction={x:e,y:o,angle:i},t.direction=this.direction,p)p[d]===this.direction[d]&&(a[d]=!0);if(a.x&&a.y&&a.angle)return t;a.x&&a.y||this.trigger("plain",t),a.x||this.trigger("plain:"+e,t),a.y||this.trigger("plain:"+o,t),a.angle||this.trigger("dir dir:"+i,t)}else this.resetDirection();return t};var _=w;function T(t,i){return this.nipples=[],this.idles=[],this.actives=[],this.ids=[],this.pressureIntervals={},this.manager=t,this.id=T.id,T.id+=1,this.defaults={zone:document.body,multitouch:!1,maxNumberOfNipples:10,mode:"dynamic",position:{top:0,left:0},catchDistance:200,size:100,threshold:.1,color:"white",fadeTime:250,dataOnly:!1,restJoystick:!0,restOpacity:.5,lockX:!1,lockY:!1,shape:"circle",dynamicPage:!1,follow:!1},this.config(i),"static"!==this.options.mode&&"semi"!==this.options.mode||(this.options.multitouch=!1),this.options.multitouch||(this.options.maxNumberOfNipples=1),this.updateBox(),this.prepareNipples(),this.bindings(),this.begin(),this.nipples}T.prototype=new e,(T.constructor=T).id=0,T.prototype.prepareNipples=function(){var o=this.nipples;o.on=this.on.bind(this),o.off=this.off.bind(this),o.options=this.options,o.destroy=this.destroy.bind(this),o.ids=this.ids,o.id=this.id,o.processOnMove=this.processOnMove.bind(this),o.processOnEnd=this.processOnEnd.bind(this),o.get=function(t){if(void 0===t)return o[0];for(var i=0,e=o.length;i<e;i+=1)if(o[i].identifier===t)return o[i];return!1}},T.prototype.bindings=function(){this.bindEvt(this.options.zone,"start"),this.options.zone.style.touchAction="none",this.options.zone.style.msTouchAction="none"},T.prototype.begin=function(){var t=this.options;"static"===t.mode&&((t=this.createNipple(t.position,this.manager.getIdentifier())).add(),this.idles.push(t))},T.prototype.createNipple=function(t,i){var e,o,n=this.manager.scroll,s={},r=this.options;t.x&&t.y?s={x:t.x-(n.x+this.box.left),y:t.y-(n.y+this.box.top)}:(t.top||t.right||t.bottom||t.left)&&((e=document.createElement("DIV")).style.display="hidden",e.style.top=t.top,e.style.right=t.right,e.style.bottom=t.bottom,e.style.left=t.left,e.style.position="absolute",r.zone.appendChild(e),o=e.getBoundingClientRect(),r.zone.removeChild(e),s=t,t={x:o.left+n.x,y:o.top+n.y});t=new _(this,{color:r.color,size:r.size,threshold:r.threshold,fadeTime:r.fadeTime,dataOnly:r.dataOnly,restJoystick:r.restJoystick,restOpacity:r.restOpacity,mode:r.mode,identifier:i,position:t,zone:r.zone,frontPosition:{x:0,y:0},shape:r.shape});return r.dataOnly||(x(t.ui.el,s),x(t.ui.front,t.frontPosition)),this.nipples.push(t),this.trigger("added "+t.identifier+":added",t),this.manager.trigger("added "+t.identifier+":added",t),this.bindNipple(t),t},T.prototype.updateBox=function(){this.box=this.options.zone.getBoundingClientRect()},T.prototype.bindNipple=function(t){function i(t,i){e=t.type+" "+i.id+":"+t.type,o.trigger(e,i)}var e,o=this;t.on("destroyed",o.onDestroyed.bind(o)),t.on("shown hidden rested dir plain",i),t.on("dir:up dir:right dir:down dir:left",i),t.on("plain:up plain:right plain:down plain:left",i)},T.prototype.pressureFn=function(i,e,t){var o=this,n=0;clearInterval(o.pressureIntervals[t]),o.pressureIntervals[t]=setInterval(function(){var t=i.force||i.pressure||i.webkitForce||0;t!==n&&(e.trigger("pressure",t),o.trigger("pressure "+e.identifier+":pressure",t),n=t)}.bind(o),100)},T.prototype.onstart=function(e){var o=this,i=o.options,n=e;return e=r(e),o.updateBox(),c(e,function(t){o.actives.length<i.maxNumberOfNipples?o.processOnStart(t):n.type.match(/^touch/)&&(Object.keys(o.manager.ids).forEach(function(i){var t;Object.values(n.touches).findIndex(function(t){return t.identifier===i})<0&&((t=[e[0]]).identifier=i,o.processOnEnd(t))}),o.actives.length<i.maxNumberOfNipples&&o.processOnStart(t))}),o.manager.bindDocument(),!1},T.prototype.processOnStart=function(i){var e=this,t=e.options,o=e.manager.getIdentifier(i),n=i.force||i.pressure||i.webkitForce||0,s={x:i.pageX,y:i.pageY},r=e.getOrCreate(o,s);r.identifier!==o&&e.manager.removeIdentifier(r.identifier),r.identifier=o;function d(t){t.trigger("start",t),e.trigger("start "+t.id+":start",t),t.show(),0<n&&e.pressureFn(i,t,t.identifier),e.processOnMove(i)}if(0<=(o=e.idles.indexOf(r))&&e.idles.splice(o,1),e.actives.push(r),e.ids.push(r.identifier),"semi"!==t.mode)d(r);else{if(!(v(s,r.position)<=t.catchDistance))return r.destroy(),void e.processOnStart(i);d(r)}return r},T.prototype.getOrCreate=function(t,i){var e,o=this.options;return/(semi|static)/.test(o.mode)?(e=this.idles[0])?(this.idles.splice(0,1),e):"semi"===o.mode?this.createNipple(i,t):(console.warn("Coudln't find the needed nipple."),!1):e=this.createNipple(i,t)},T.prototype.processOnMove=function(t){var i=this.options,e=this.manager.getIdentifier(t),o=this.nipples.get(e),n=this.manager.scroll;if(u=t,isNaN(u.buttons)?0!==u.pressure:0!==u.buttons){if(!o)return console.error("Found zombie joystick with ID "+e),void this.manager.removeIdentifier(e);i.dynamicPage&&(f=o.el.getBoundingClientRect(),o.position={x:n.x+f.left,y:n.y+f.top}),o.identifier=e;var s=o.options.size/2,r={x:t.pageX,y:t.pageY};i.lockX&&(r.y=o.position.y),i.lockY&&(r.x=o.position.x);var d,p,a,c,l,h=v(r,o.position),u=(p=(y=o.position).x-r.x,d=y.y-r.y,Math.atan2(d,p)*(180/Math.PI)),f=b(u),e=h/s,y={distance:h,position:r};"circle"===o.options.shape?(g=Math.min(h,s),d=o.position,p=g,a={x:0,y:0},m=b(m=u),a.x=d.x-p*Math.cos(m),a.y=d.y-p*Math.sin(m),m=a):(a=r,c=o.position,l=s,m={x:Math.min(Math.max(a.x,c.x-l),c.x+l),y:Math.min(Math.max(a.y,c.y-l),c.y+l)},g=v(m,o.position)),i.follow?s<h&&(c=r.x-m.x,l=r.y-m.y,o.position.x+=c,o.position.y+=l,o.el.style.top=o.position.y-(this.box.top+n.y)+"px",o.el.style.left=o.position.x-(this.box.left+n.x)+"px",h=v(r,o.position)):(r=m,h=g);var m=r.x-o.position.x,g=r.y-o.position.y;o.frontPosition={x:m,y:g},i.dataOnly||x(o.ui.front,o.frontPosition);i={identifier:o.identifier,position:r,force:e,pressure:t.force||t.pressure||t.webkitForce||0,distance:h,angle:{radian:f,degree:u},vector:{x:m/s,y:-g/s},raw:y,instance:o,lockX:i.lockX,lockY:i.lockY};(i=o.computeDirection(i)).angle={radian:b(180-u),degree:180-u},o.trigger("move",i),this.trigger("move "+o.id+":move",i)}else this.processOnEnd(t)},T.prototype.processOnEnd=function(t){var i=this,e=i.options,t=i.manager.getIdentifier(t),o=i.nipples.get(t),t=i.manager.removeIdentifier(o.identifier);o&&(e.dataOnly||o.hide(function(){"dynamic"===e.mode&&(o.trigger("removed",o),i.trigger("removed "+o.id+":removed",o),i.manager.trigger("removed "+o.id+":removed",o),o.destroy())}),clearInterval(i.pressureIntervals[o.identifier]),o.resetDirection(),o.trigger("end",o),i.trigger("end "+o.id+":end",o),0<=i.ids.indexOf(o.identifier)&&i.ids.splice(i.ids.indexOf(o.identifier),1),0<=i.actives.indexOf(o)&&i.actives.splice(i.actives.indexOf(o),1),/(semi|static)/.test(e.mode)?i.idles.push(o):0<=i.nipples.indexOf(o)&&i.nipples.splice(i.nipples.indexOf(o),1),i.manager.unbindDocument(),/(semi|static)/.test(e.mode)&&(i.manager.ids[t.id]=t.identifier))},T.prototype.onDestroyed=function(t,i){0<=this.nipples.indexOf(i)&&this.nipples.splice(this.nipples.indexOf(i),1),0<=this.actives.indexOf(i)&&this.actives.splice(this.actives.indexOf(i),1),0<=this.idles.indexOf(i)&&this.idles.splice(this.idles.indexOf(i),1),0<=this.ids.indexOf(i.identifier)&&this.ids.splice(this.ids.indexOf(i.identifier),1),this.manager.removeIdentifier(i.identifier),this.manager.unbindDocument()},T.prototype.destroy=function(){for(var t in this.unbindEvt(this.options.zone,"start"),this.nipples.forEach(function(t){t.destroy()}),this.pressureIntervals)this.pressureIntervals.hasOwnProperty(t)&&clearInterval(this.pressureIntervals[t]);this.trigger("destroyed",this.nipples),this.manager.unbindDocument(),this.off()};var k=T;function P(t){var e=this;e.ids={},e.index=0,e.collections=[],e.scroll=d(),e.config(t),e.prepareCollections();function i(){var i;e.collections.forEach(function(t){t.forEach(function(t){i=t.el.getBoundingClientRect(),t.position={x:e.scroll.x+i.left,y:e.scroll.y+i.top}})})}s(window,"resize",function(){n(i)});function o(){e.scroll=d()}return s(window,"scroll",function(){n(o)}),e.collections}P.prototype=new e,(P.constructor=P).prototype.prepareCollections=function(){var t=this;t.collections.create=t.create.bind(t),t.collections.on=t.on.bind(t),t.collections.off=t.off.bind(t),t.collections.destroy=t.destroy.bind(t),t.collections.get=function(i){var e;return t.collections.every(function(t){return!(e=t.get(i))}),e}},P.prototype.create=function(t){return this.createCollection(t)},P.prototype.createCollection=function(t){t=new k(this,t);return this.bindCollection(t),this.collections.push(t),t},P.prototype.bindCollection=function(t){function i(t,i){e=t.type+" "+i.id+":"+t.type,o.trigger(e,i)}var e,o=this;t.on("destroyed",o.onDestroyed.bind(o)),t.on("shown hidden rested dir plain",i),t.on("dir:up dir:right dir:down dir:left",i),t.on("plain:up plain:right plain:down plain:left",i)},P.prototype.bindDocument=function(){this.binded||(this.bindEvt(document,"move").bindEvt(document,"end"),this.binded=!0)},P.prototype.unbindDocument=function(t){Object.keys(this.ids).length&&!0!==t||(this.unbindEvt(document,"move").unbindEvt(document,"end"),this.binded=!1)},P.prototype.getIdentifier=function(t){var i;return t?void 0===(i=void 0===t.identifier?t.pointerId:t.identifier)&&(i=this.latest||0):i=this.index,void 0===this.ids[i]&&(this.ids[i]=this.index,this.index+=1),this.latest=i,this.ids[i]},P.prototype.removeIdentifier=function(t){var i,e={};for(i in this.ids)if(this.ids[i]===t){e.id=i,e.identifier=this.ids[i],delete this.ids[i];break}return e},P.prototype.onmove=function(t){return this.onAny("move",t),!1},P.prototype.onend=function(t){return this.onAny("end",t),!1},P.prototype.oncancel=function(t){return this.onAny("end",t),!1},P.prototype.onAny=function(t,i){var e,o=this,n="processOn"+t.charAt(0).toUpperCase()+t.slice(1);return i=r(i),c(i,function(t){e=o.getIdentifier(t),c(o.collections,function(t,i,e){0<=e.ids.indexOf(i)&&(e[n](t),t._found_=!0)}.bind(null,t,e)),t._found_||o.removeIdentifier(e)}),!1},P.prototype.destroy=function(){this.unbindDocument(!0),this.ids={},this.index=0,this.collections.forEach(function(t){t.destroy()}),this.off()},P.prototype.onDestroyed=function(t,i){if(this.collections.indexOf(i)<0)return!1;this.collections.splice(this.collections.indexOf(i),1)};var E=new P;i.default={create:function(t){return E.create(t)},factory:E}}],n.c=o,n.d=function(t,i,e){n.o(t,i)||Object.defineProperty(t,i,{enumerable:!0,get:e})},n.r=function(t){"undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(t,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(t,"__esModule",{value:!0})},n.t=function(i,t){if(1&t&&(i=n(i)),8&t)return i;if(4&t&&"object"==typeof i&&i&&i.__esModule)return i;var e=Object.create(null);if(n.r(e),Object.defineProperty(e,"default",{enumerable:!0,value:i}),2&t&&"string"!=typeof i)for(var o in i)n.d(e,o,function(t){return i[t]}.bind(null,o));return e},n.n=function(t){var i=t&&t.__esModule?function(){return t.default}:function(){return t};return n.d(i,"a",i),i},n.o=function(t,i){return Object.prototype.hasOwnProperty.call(t,i)},n.p="",n(n.s=0).default;function n(t){if(o[t])return o[t].exports;var i=o[t]={i:t,l:!1,exports:{}};return e[t].call(i.exports,i,i.exports,n),i.l=!0,i.exports}var e,o});
    </script>
</head>
<body onload="start_socket()">
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
            <div class="rocker-head">
                <div class="rocker-head-item">
                    <div id="rocker-s-1-1" class="item" onclick="onSelectChannel(1,1)">1</div>
                    <div id="rocker-s-1-3" class="item select" onclick="onSelectChannel(1,3)">3</div>
                    <div id="rocker-s-1-2" class="item" onclick="onSelectChannel(1,2)">2</div>
                    <span>S-1??????</span>
                </div>
                <div class="rocker-head-item">
                    <div id="rocker-s-2-1" class="item" onclick="onSelectChannel(2,1)">1</div>
                    <div id="rocker-s-2-3" class="item select" onclick="onSelectChannel(2,3)">3</div>
                    <div id="rocker-s-2-2" class="item" onclick="onSelectChannel(2,2)">2</div>
                    <span>S-2??????</span>
                </div>
            </div>
            <div class="rocker-mode">
                <div class="item">
                    <div id="rocker-left" class="item-select select" onclick="onSelectRocker('left')">?????????</div>
                </div>
                <div class="item">
                    <div id="rocker-right" class="item-select" onclick="onSelectRocker('right')">?????????</div>
                </div>
            </div>
            <div id="rocker-item" class="rocker-item"></div>
            <div class="rocker-data-show">
                <div class="item">
                    <div id="x-id" class="x">-</div>
                </div>
                <div class="item">
                    <div id="y-id" class="y">-</div>
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
    let socket_service;
    let rocker_data = {
        rocker: "left",
        s1: 3,
        s2: 3,
        ch0: 187.50,
        ch1: 465.00,
        ch2: 187.50,
        ch3: 465.00
    };
    function start_socket(){
        socket_service = new WebSocket('ws://' + window.location.hostname + ':8181/');
        let rocker = geek_control.create({
            zone: document.getElementById('rocker-item'),
            mode: 'static',
            position: {left: '50%', top: '50%'},
            color: 'white',
            size: 160
        });
        rocker.on("start", function () {
            console.log("start");
        });
        rocker.on("move", function (eval, data) {
            if(rocker_data.rocker === "left"){
                rocker_data.ch2 = data.position.x.toFixed(2);
                rocker_data.ch3 = data.position.y.toFixed(2);
                document.getElementById("x-id").innerHTML = rocker_data.ch2;
                document.getElementById("y-id").innerHTML = rocker_data.ch3;
            }
            if(rocker_data.rocker === "right"){
                rocker_data.ch0 = data.position.x.toFixed(2);
                rocker_data.ch1 = data.position.y.toFixed(2);
                document.getElementById("x-id").innerHTML = rocker_data.ch0;
                document.getElementById("y-id").innerHTML = rocker_data.ch1;
            }
            send_data();
        });
        rocker.on("end", function (eval, data) {
            if(rocker_data.rocker === "left"){
                rocker_data.ch2 = data.position.x.toFixed(2);
                rocker_data.ch3 = data.position.y.toFixed(2);
                document.getElementById("x-id").innerHTML = rocker_data.ch2;
                document.getElementById("y-id").innerHTML = rocker_data.ch3;
            }
            if(rocker_data.rocker === "right"){
                rocker_data.ch0 = data.position.x.toFixed(2);
                rocker_data.ch1 = data.position.y.toFixed(2);
                document.getElementById("x-id").innerHTML = rocker_data.ch0;
                document.getElementById("y-id").innerHTML = rocker_data.ch1;
            }
            send_data();
        });
    }
    function onSelectChannel(index, data) {
        if(index === 1){
            document.getElementById("rocker-s-1-1").setAttribute("class", "item");
            document.getElementById("rocker-s-1-2").setAttribute("class", "item");
            document.getElementById("rocker-s-1-3").setAttribute("class", "item");
            document.getElementById("rocker-s-1-" + data).setAttribute("class", "item select");
            rocker_data.s1 = data;
        }
        if(index === 2){
            document.getElementById("rocker-s-2-1").setAttribute("class", "item");
            document.getElementById("rocker-s-2-2").setAttribute("class", "item");
            document.getElementById("rocker-s-2-3").setAttribute("class", "item");
            document.getElementById("rocker-s-2-" + data).setAttribute("class", "item select");
            rocker_data.s2 = data;
        }
        send_data();
    }
    function onSelectRocker(rocker) {
        if(rocker === "left"){
            document.getElementById("rocker-left").setAttribute("class", "item-select select");
            document.getElementById("rocker-right").setAttribute("class", "item-select");
        }
        if(rocker === "right"){
            document.getElementById("rocker-right").setAttribute("class", "item-select select");
            document.getElementById("rocker-left").setAttribute("class", "item-select");
        }
        rocker_data.rocker = rocker;
    }
    function send_data(){
        let json_data = {
            type:"rocker-control-write",
            s1: rocker_data.s1,
            s2: rocker_data.s2,
            ch0: parseInt(rocker_data.ch0),
            ch1: parseInt(rocker_data.ch1),
            ch2: parseInt(rocker_data.ch2),
            ch3: parseInt(rocker_data.ch3)
        }
        socket_service.send(JSON.stringify(json_data));
    }
    document.body.addEventListener('touchmove', function (e) {
        e.preventDefault();
    }, {passive: false});
</script>
</html>

)=====";

#endif
