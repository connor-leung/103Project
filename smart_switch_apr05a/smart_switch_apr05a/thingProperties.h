// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onButtonChange();
void onEndAngleChange();
void onStartAngleChange();
void onBlinkChange();

CloudLight button;
int endAngle;
int startAngle;
bool blink;

void initProperties(){

  ArduinoCloud.addProperty(button, READWRITE, ON_CHANGE, onButtonChange);
  ArduinoCloud.addProperty(endAngle, READWRITE, ON_CHANGE, onEndAngleChange);
  ArduinoCloud.addProperty(startAngle, READWRITE, ON_CHANGE, onStartAngleChange);
  ArduinoCloud.addProperty(blink, READWRITE, ON_CHANGE, onBlinkChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
