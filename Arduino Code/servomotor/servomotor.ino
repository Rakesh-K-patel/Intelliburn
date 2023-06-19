#include<Servo.h>
Servo motor;
//int knob_off=0;
//int knob_on=180;
int p=0;
void setup() {
  // put your setup code here, to run once:
  motor.attach(9);
  motor.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
//  if(flame_sensor == HIGH)
//  {
//    motor.write(knob_on);   
//  }
//  
//  if(button == LOW)
//  {
//    motor.write(knob_off);
//  }
//}
//  
  for(p=0;p<=180;p++)
  {
    motor.write(p);
    delay(10);
  }
  for(p=180;p>=0;p--)
  {
    motor.write(p);
    delay(10);
  }
}
