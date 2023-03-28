#include "main.h"

String indexPage(void)
{
    String i;

    i = "<!DOCTYPE HTML><html><head>";
    i += indexMeta();
    i += indexStyle();
    i += "<head>";
    i += R"(<body>
    <header><h3>Energy Monitor & Control</h3></header>
    
    <div class="container">
    <section> 
        <form action="/scan" method="POST">
        <input class="scan" type="submit" value="scan">
        </form>
        <div class="locations">
        <p>WiFi Configuration Page</p> 
        </div>
    </section>
    <article class="last">)";
    i += WiFi_connection_status();
    i += R"(</article>
    <article class="bgcol">
    <h3>Select from Available WiFi or insert a WiFi details</h3>)";
    
    i +=  R"(<form method="POST" action="setting">)";
    i += R"(<input class="password" name="ssid" placeholder="&#x1f4f6 SSID" required minlength="1" maxlength="32" list="WiFi"/>)";
    i += st;
    i += R"(<p><input class="password" type="password" name="pass" placeholder="&#x1f511 Password" required minlength="1" maxlength="64"></p>)";
    i += R"(<p><input class="submit" type="submit"></p></form>)";

    i += R"(</article>
    <article class="last">
        WiFi credential will not be submitted after 90 seconds of opening this page. Socket has to be manually open from the app.
    </article>
    <article class="null">
    </article>
    </div>
    <div class="gap">
    </div>
    <footer> 
        <h4></h4>
        <h3><small><a href="mailto:sagiecyber@gmail.com">About</a></small> Imuwahen &#x00AE</h3>
    <script>
        if(window.history.replaceState){
        window.history.replaceState(null,null,window.location.href);}
    </script>
    </footer>
    </body>
    </html>)";
    return i;
    }
