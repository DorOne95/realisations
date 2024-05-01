#include <rgb_lcd.h>

#include <rgb_lcd.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#include <rgb_lcd.h>
#include "rgb_lcd.h"
#include <math.h>
rgb_lcd lcd;

const int colorR = 0;
const int colorG = 0;
const int colorB = 0;

const int B = 4275;
const int R0 = 100000;
const int pinTemperature = A0;

void setup()
{
   lcd.begin(16, 2);

    lcd.setRGB(colorR, colorG, colorB);

    // Print a message to the LCD.
    lcd.print("Temperature = ");

}

void loop()
{  
  int temp = analogRead(pinTemperature);
  
  float R = 1023.0/temp-1.0;

  float temperature = 1.0/(log(R)/B+1/298.15)-273.15;

   lcd.setCursor(0, 1);
    
    lcd.print(temperature);

  delay(500);
}
