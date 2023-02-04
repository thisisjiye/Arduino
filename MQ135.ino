#include "MQ135.h"

#define ANALOGPIN A0
#define RZERO 206.85

MQ135 gasSensor = MQ135(ANALOGPIN);

void setup() {
  Serial.begin(9600);
  delay(3000);
  Serial.print("MQ135 RZERO Calibration value: ");
  Serial.println(RZERO);

}

void loop() {
  float ppm = gasSensor.getPPM();
  delay(1000);
  Serial.print("CO2 ppm value : ");
  Serial.println(ppm);

}
