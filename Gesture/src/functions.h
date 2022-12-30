void handleRoot()
{
  server.send(200, "text/html", "<center><h1>ESP8266 Controller</h1></center>");
}
//------------------------------------------------------------------------
// void gesture()
// {
  // String gest = String("Gesture Recognized as: ") + "\n" + "horizontal" + "\n";
  // gest = "<html><head><meta http-equiv=\"refresh\" content=\"2\"> <body bgcolor=\"#ffffff\">"
        //  + gest + "</body></html>";
  // server.send(200, "text/html", gest);
// }