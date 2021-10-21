
#include "motor.h"
#include <analogWrite.h>


motor::motor(int forwardPin, int backwardPin){
    forwardPin= this->forwardPin;
    backwardPin= this->backwardPin;

}

 void motor::init(){
    pinMode(forwardPin, OUTPUT);
    pinMode(backwardPin, OUTPUT);
}

void motor::setSpeed(int speed, int direction){
    if (direction = FORWARD){
        analogWrite(forwardPin, speed);
        digitalWrite(backwardPin, LOW);

    } else if (direction = BACKWARD){
        analogWrite(backwardPin, speed);
        digitalWrite(forwardPin, LOW);
        
    }
}

