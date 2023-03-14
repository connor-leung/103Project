/* 
  Sketch generated by the Arduino IoT Cloud Thing "Untitled"
  https://create.arduino.cc/cloud/things/6d151111-b49b-4658-a3e0-c2ccfea26787 

  Arduino IoT Cloud Variables description

  The following variables are automatically generated and updated when changes are made to the Thing

  int angle;
  bool button;

  Variables which are marked as READ/WRITE in the Cloud Thing will also have functions
  which are called when their values are changed from the Dashboard.
  These functions are generated with the Thing and added at the end of this sketch.
*/

#include "thingProperties.h"
#include <Servo.h>

Servo servo;

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  
  servo.attach(6);
  servo.write(angle);
  
}

void loop() {
  ArduinoCloud.update();
  // Your code here 
  
  
}


/*
  Since Angle is READ_WRITE variable, onAngleChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onAngleChange()  {
  // Add your code here to act upon Angle change
  if (button == HIGH) {
    for (int i = angle; i < 360; angle++) {
      servo.write(i);
      delay(15);
    }
  }
}


/*
  Since Button is READ_WRITE variable, onButtonChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onButtonChange()  {
  // Add your code here to act upon Button change
}