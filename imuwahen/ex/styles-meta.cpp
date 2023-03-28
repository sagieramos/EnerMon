#include "main.h"

String indexStyle(void)
{
String i = R"(<style> 
.container{
    position: relative;
    background: white;
    border-radius: 10px;
    max-width: 600px;
    width: 100%;
    margin: auto;
    padding-top: 15px;
    box-shadow: rgba(50, 50, 93, 0.25) 0px 2px 5px -1px, rgba(0, 0, 0, 0.3) 0px 1px 3px -1px;
}
body { 
    background-color: #00bfff;
    color: #484848;
    font-size: 13px;
    font-family: Circular,"Helvetica Neue",Helvetica,Arial,sans-serif;
}
footer {
    position: fixed;
    background: #00bfffa9;
    height: px;
    bottom: 0vh;
    margin-bottom: 0px;
    width: 100%;
    text-align: center;   
    border-radius: 4px;
}
footer h3{
    margin-left: 10PX;
    margin-top: 8px;
    color: #484848;
}
    section{
    border: 1.8px solid #DDDDDD;   
} 
.gap {
    height: 30px;
}
.container .submit{
    position: relative;
    background: #00bfff;
    height: 25px;
    width: 100%;
    border: 0px solid #00bfff;
    border-radius: 4px;
    margin-left: 3.5px;
}
.container .password{
    height: 25px;
    width: 100%;
    background: #00bfff0e;
    border: 1px solid #00bfff;
    border-radius: 4px;
    padding-left: 5px;
    right: 2.7px;
    font-size: 100%;
}
.filters p {
    margin-left: 10PX;
    margin-top: 1.5mm;
    font-weight: 600;
    font-size: 14px;
}
article {
    width: 80%;                                             /**/
    padding: 20px;
    margin: 15px auto;
    border: 1px solid #DDDDDD; 
    border-radius: 4px;
}
.container .last{
    width: 80%;                                             /**/
    padding: 20px;
    color: #f34814;
    border-radius: 4px;}
.container .null{
    width: 80%;                                             /**/
    padding: 10px;
    border: 0px solid #00bfff;
    border-radius: 4px;}
.container .scan{
    position: absolute;
    font-size: 18px;
    background: #00bfff;
    color: #FFFFFF;
    height: 30px;
    width: 60px;
    border-style: none;
    top: 22px;
    right: 0%;
    margin-right: 10PX;
    border-radius: 4px;
    font-size: 100%;    
}  
header {
    height: 8px;
    width: 100%;
    text-align: center;
    background: #00bfff;
    color:  white;
    padding: 0.1px;
    padding-bottom: 30px;
    font-weight: 600;  
}
header h3 {
    margin: 8px;
    font-size: 17px;
}
section div {
    display: inline-block;
    position: relative;
    width: 70%;
}
section .locations {
border-right: 1px solid #DDDDDD;
}
section p{
    padding-left: 10px;
    font-weight:600;
    font-size: 100%;
    color:#00bfff;
}
.container .bgcol h3{
    font-size: 100%;
}
@viewport{
    width: device-width;
    zoom:1.0;
}
</style>)";
return i;
}


String indexMeta(void)
{
    String i =
    R"(
<meta name="viewport" content="wide=device-width, initial-scale=1">     
<meta http-equiv="Cache-Control" content="no-cache, no-store, must-revalidate" />
<meta http-equiv="Pragma" content="no-cache" />
<meta http-equiv="Expires" content="0" />)";
return i;
}