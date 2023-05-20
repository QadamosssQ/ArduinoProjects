#include <SparkFun_ADXL345.h>

ADXL345 adxl = ADXL345();

int range = 2; // Range: 2g, 4g, 8g, 16g

void setup() {
  Serial.begin(9600);

  adxl.powerOn();
  adxl.setRangeSetting(range);
}

void loop() {
  int x, y, z;
  adxl.readAccel(&x, &y, &z);

  Serial.print("X: ");
  Serial.print(x);

  Serial.print("    Y: ");
  Serial.print(y);

  Serial.print("    Z: ");
  Serial.println(z);

  delay(250);
}
