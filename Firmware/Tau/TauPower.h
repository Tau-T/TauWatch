/*Description:
 * 
 * 
 * 
 * 
 */

#ifndef TauPower_h
#define TauPower_h

#include <Arduino.h>

class TauPower
{
private:


public:

  TauPower();
  void begin();
  
  bool isCharging(); //bool
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();
};

#endif
