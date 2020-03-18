/********************************************************************
 * This example rapid tests the hardware to verify Qwiic Alphanumeric
 * builds.
 * 
 * Priyanka Makin @ SparkFun Electronics
 * Original Creation Date: March 17, 2020
 *******************************************************************/
#include <Wire.h>
#include <SparkFun_Alphanumeric_Display.h>
HT16K33 display;

void setup()
{
  Serial.begin(115200);
  Serial.println("Qwiic Alphanumeric Display Test");
  Wire.begin();
}

void loop()
{
  if (display.begin() == true) {
    Serial.println("Alphanumeric detected!");
    display.print("Milk");
  } else {
    Serial.println("Nothing detected!");
  }
}
