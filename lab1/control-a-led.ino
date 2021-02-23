#include <ESP8266WebServer.h>
#include "index.h"

//https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WebServer

const char *ssid = "b9-2";
const char *password = "onsdagsklubben";
ESP8266WebServer www_server(80);

const int LED = D6;
String server_state = "";

void led(){
    server_state = www_server.arg("browser_state"); //Getting information about request arguments
    Serial.println(server_state);
    if (server_state == "On"){
        digitalWrite(LED, HIGH);
    } else {
        digitalWrite(LED, LOW);
    }
    www_server.send(200, "text/html", "ok");
}

void htmlIndex(){
    String s = FPSTR(MAIN_page); //Read HTML contents
    www_server.send(200, "text/html", s); //Sending responses to the client
}

void connectToWiFi(){
    Serial.println("Connecting to the WiFi");
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    Serial.println("Waiting for connection");
    while (WiFi.status() != WL_CONNECTED){
        delay(500);
        Serial.print(".");
    }

    Serial.println();
    Serial.print("Connected to ");
    Serial.println(ssid);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}

void setupServer(){
    www_server.begin();             //Starting the server
    Serial.println("HTTP server started");
    www_server.on("/", htmlIndex);  //Client request handlerFunction
    www_server.on("/led", led);     //Client request handlerFunction
}

void setup(){
    pinMode(LED, OUTPUT);
    Serial.begin(115200);
    delay(1000);
    connectToWiFi();
    setupServer();
    delay(4000);
}

void loop(){
    www_server.handleClient();      //Listen for HTTP requests from clients
}
