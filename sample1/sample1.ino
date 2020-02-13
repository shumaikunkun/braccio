#include <Braccio.h>
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_ver;
Servo wrist_rot;
Servo gripper;

void setup(){
  Braccio.begin();
}

void loop(){
  Braccio.ServoMovement(20, 90,90,90,90,90,73);
}
