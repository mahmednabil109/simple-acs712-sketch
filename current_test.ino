#include "ACS712.h"

#define sensorInput A0  // sensor connects to analog 0 
#define DC              // define AC for Alternating current

ACS712 sensor(ACS712_30A, sensorInput);

void setup() {
  Serial.begin(9600);
  sensor.calibrate();  // try not to draw any current when reset or run the arduino to help calibration process 
}

void loop() {

  float currentReading;


  #ifdef DC
    currentReading = sensor.getCurrentDC();     // measure DC current
  #else
    currentReading = sensor.getCurrentAC(50);   // measure AC current at specified frequency (Hz)
  #endif
  
  Serial.print("I = ");
  Serial.print(currentReading, 3);
  Serial.print(" A");

  #ifdef DC
    Serial.println(" DC");
  #else
    Serial.println(" AC");
  #endif
  
  delay(500);
}
