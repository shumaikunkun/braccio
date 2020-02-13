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
  Braccio.ServoMovement(20,    0,  45, 180, 180,  90,  10);
  delay(1000);
  Braccio.ServoMovement(20,    0,  90, 180, 180,  90,  10);
  Braccio.ServoMovement(10,    0,  90, 180, 180,  90,  60);
  Braccio.ServoMovement(20,    0,  45, 180,  45,   0,  60);
  Braccio.ServoMovement(20,  180,  45, 180,  45,   0,  60);
  Braccio.ServoMovement(20,    0,  90, 180, 180,  90,  60);
  //掴みを解除(M6を開く)
  Braccio.ServoMovement(20,    0,  90, 180, 180,  90,  10);

}
