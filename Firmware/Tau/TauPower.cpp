#include "TauPower.h"
const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint16_t VDD = 3300;
const uint16_t adcResolution = 1023;
/*
 * int p most boards define 2-bytes, some do 4-bytes
 * float - give you decimals; float is less precise than double
 * double - give you decimals; more precise than float
 * 
 * uint8_t - unsigned 8 bit integer [0-255]
 * uint16_t - unsigned 16 bit integer (0-65355)
 * 
 * int8_t - signed 8 bit integer (-127 - 127)
 * int16_t - signed 16-bit integer (-32768 - 32767)
 */

TauPower::TauPower()
{
}
void TauPower::begin()
{
  pinMode(chrgPin, INPUT);
  
}
//Returns whether or not battery is charging
bool TauPower::isCharging() 
{
  return !digitalRead(chrgPin); //return 0 if charging, 1 if not charging
}
uint16_t TauPower::getBatteryVoltage()
{
  uint16_t val = analogRead(battPin); //10-bit ADC, will return a number between 0 (0V) and 1023 (3.3V)
  uint16_t voltage = VDD*(val/adcResolution);

  return 2*voltage;
}
//Use as a switch either let it be high or low to enable/disable 
void TauPower::enableGPS()
{
  
}
void TauPower::disableGPS()
{
  
}

void TauPower::enableMP3()
{
  
}
void TauPower::disableMP3()
{
  
}
