#include <analogWrite.h>

#include "src/motor.h"

motor MotorLeft(2, 17);
motor MotorRight(16,15);


void setup(){
    MotorLeft.init();
    MotorRight.init();
}

void loop(){
    MotorLeft.setSpeed(255, BACKWARD);
    MotorRight.setSpeed(255, FORWARD);

    delay(1000);
/*
    MotorLeft.setSpeed(255, BACKWARD);
    MotorRight.setSpeed(255, FORWARD);

    delay(1000);

    MotorLeft.setSpeed(0,FORWARD);
    MotorRight.setSpeed(0, FORWARD);

    delay(1000);

    for(int i = 0; i <= 255; i++){
        MotorLeft(i, FORWARD);
        MotorRight(i, FORWARD);

        delay(10);
    }

    MotorLeft.setSpeed(0,FORWARD);
    MotorRight.setSpeed(0, FORWARD);
    delay(1000);

    for(int i = 0; i <= 255; i++){
        MotorLeft(i, BACKWARD);
        MotorRight(i, BACKWARD);

        delay(10); 
    }*/
}