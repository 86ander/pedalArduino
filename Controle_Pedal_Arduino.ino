//USB 3 AXIS Controller
//use with Arduino Leonardo or ProMicro.
//Install Joystick library

#include <Joystick.h>

Joystick_ Joystick;

int RyAxis_ = 0;
int RzAxis_ = 0;
int Throttle_ = 0;

const bool initAutoSendState = true;

void setup()
{
      Joystick.begin();
  }

void loop(){

  RyAxis_ = analogRead(A0);
  RyAxis_ = map(RyAxis_,0,1023,0,255);
  Joystick.setRyAxis(RyAxis_);

  RzAxis_ = analogRead(A1);
  RzAxis_ = map(RzAxis_,1023,0,255,0);
  Joystick.setRzAxis(RzAxis_);

  Throttle_ = analogRead(A2);
  Throttle_ = map(Throttle_,1023,0,255,0);
  Joystick.setThrottle(Throttle_);

delay (50);
}