
#ifndef Motor_h 
#define Motor_h 


#include <arduino.h>
#include <analogWrite.h>

#define FORWARD 0
#define BACKWARD 1
class motor
{
    public: 
        motor(int forwardPin, int backwardPin);
        void setSpeed(int speed, int direction);
        void init();

    private: 
        int forwardPin;
        int backwardPin;

};

extern motor Motor;
#endif