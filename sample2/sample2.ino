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
  Braccio.ServoMovement(20,   15,   0, 180, 180,  0,  73);
  delay(1000);
  Braccio.ServoMovement(20,  165, 180,   0,   0, 180, 10);
  delay(1000);
}
