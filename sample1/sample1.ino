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
  Braccio.ServoMovement(20,0,15,0,0,0,10);
  //Braccio.ServoMovement(20,180,165,180,180,180,73);
}
