#include <Arduino.h>
#include "model.h" //the classifier model
#include <Wire.h> //I2C protocol
#include <Adafruit_MPU6050.h> //to use the MPU6050 accelerometer
#include <Adafruit_Sensor.h> //to use the adafruit sensors

//Web Server
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
ESP8266WebServer server(80);
#include "functions.h"
//---------------------------------
const char* ssid     = "Mihir";
const char* password = "8805895611";
//------------------------------------

Adafruit_MPU6050 accelerometer; //instanciate the accelerometer object 
Eloquent::ML::Port::SVM SVM_SKleanr_classifier;//instanciate the classifier object 
String output_str;
void setup()
{
  Serial.begin(115200);//begin the Serial communication
  Wire.begin(); //begin the I2C communication

  // wifi connection establishing
  WiFi.begin("Mihir", "8805895611");
  Serial.print("\n\r \n\rWorking to connect");
  while (WiFi.status() != WL_CONNECTED) {delay(500); Serial.print(".");}
  Serial.println("");
  Serial.println("ESP8266 Webpage");
  Serial.println("Connected to WiFi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  
  server.on("/", handleRoot);
  //server.on("/gesture", gesture);
  
  server.begin();
  Serial.println("HTTP server started");
  //-----------------------------------------------------------------------------

  if (!accelerometer.begin()) //begin the MPU communication
  {
    Serial.println("Error with MPU");
  }

  Serial.println("Everything is setup !");
}

void loop()
{
  //Connecting to the server
  {server.handleClient();}
  

  //---------------------------------------------------------------------------------------
  sensors_event_t a, g, temp; //instanciate the sensors's reading object 
  accelerometer.getEvent(&a, &g, &temp);//register the read values to the object declared before
  //Serial.print(a.acceleration.x);
  float features[] = {a.acceleration.x, a.acceleration.y, a.acceleration.z}; //create the array containing the read values size is : 1x3 same as defined in google colab
  output_str = SVM_SKleanr_classifier.predictLabel(features); //run inference
  //server.on("/gesture", gesture);
  server.on("/gesture", [](){
  //  String page = "<h1>Gesture Recognized as:</h1><br>" + output_str;
    // server.send(200,"text/html",page);
    String gest = String("<h2>Gesture Recognized as: </h2>") + "\n<h1>" + output_str + "</h1>\n";
    gest = "<html><head><meta http-equiv=\"refresh\" content=\"2\"> <body bgcolor=\"#ffffff\" color=\"blue\"><center><h1>"
       + gest + "</h1></center></body></html>";
    server.send(200, "text/html", gest);
  });
  


  Serial.println(output_str);//print the resulting orientation
  delay(700);
}
