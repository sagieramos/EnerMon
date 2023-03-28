#include "main.h"
#include <ESPmDNS.h>

IPAddress IPAP = {192, 168, 64, 100};

String WiFi_connection_status(void){
    WiFiStatus = WiFi.status();
    String a = " saved, but no active connection is established";
    String b = "Connection was established with ";
    String x = "<strong>";
    if(WiFiStatus == WL_CONNECTED)
    return b + x + esid.c_str() + "</strong>";
    else
    return x + esid.c_str() + "</strong>" + a;
}

void initWiFi()
{
  WiFi.disconnect(); //function new
  for (int i = 0; i < 32; ++i){
  esid += char(EEPROM.read(i));}
  for (int i = 32; i < 96; ++i){
  epass += char(EEPROM.read(i));}
  WiFi.mode(WIFI_MODE_APSTA);
  
  WiFi.softAP("EMC_Admin_Server", "imuwahen360");
  WiFi.softAPConfig(IPAP, INADDR_NONE, INADDR_NONE);
  WiFi.config(INADDR_NONE, INADDR_NONE, INADDR_NONE, INADDR_NONE);
  WiFi.setHostname(hostname.c_str()); //define hostname
}

void startServer(void)
{ 
  WiFi.begin(esid.c_str(), epass.c_str());
  delay(3000);
  WiFi.status() == WL_CONNECTED  ? V[46] = 3 : WiFi.disconnect();
}

bool isSavedNetworkAvailable(void)
{
  if(WiFi.status() != WL_CONNECTED){
    WiFi.disconnect();}
  
  int x;
  int n = WiFi.scanNetworks();
  if (n != 0){
  for (int i = 0; i < n; ++i){
    if(esid == WiFi.SSID(i)){
      x++;}
      } 
    if(x > 0)return true;
    else return false;
  }
  else return false;
  }

unsigned long pTime;  
void connectNetwork(void) 
{ 
  readIP();
  if(wifiState != 2 && WiFi.status() == WL_CONNECTED)
  WiFi.disconnect();
  else if(wifiState == 2 && WiFi.status() != WL_CONNECTED)
  {
    unsigned long currentTime = millis();
    if(isSavedNetworkAvailable() == true && currentTime - pTime >= 30000)
      {
        WiFi.mode(WIFI_MODE_APSTA);
        WiFi.softAP("EMC_Admin_Server", "imuwahen360");
        WiFi.setHostname(hostname.c_str()); 
        WiFi.begin(esid.c_str(), epass.c_str());
        pTime = currentTime;
      }
  }
  else{}
  }



void hostResolution()
{
  MDNS.begin("imuwahen.net");
  MDNS.addService("http", "tcp", 80);
}
