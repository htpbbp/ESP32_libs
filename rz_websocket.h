/* RRBBP
 * 2018-10-13
 * v0.01
*/


#include "Arduino.h"

#ifndef rz_websocket
#define rz_websocket


#include <WiFi.h>
#include <WebSocketServer.h>

  
WiFiServer webserver(80);
WebSocketServer webSocketServer;


void rz_webserver_start()
{
  webserver.begin();
}

 

#endif 

