
#ifndef Bluetoothsensor_H
#define Bluetoothsensor_H
#include "Arduino.h"




class Bluetoothsensor{

public:  
      //Constructor-Declares for three ultrasonic sensors if you want change the number of ultrasonics.
      //Trig pins are outputs Echo pins are input.
       Bluetoothsensor(int ENA,int IN1,int IN2,int IN3,int IN4,int ENB);
       void pinSetups();
       void Carforward();
       void Carbackward();
       void Carright();
       void Carleft();
       void Carstop();
       

private:
//Private Variables
       //private variable for trig and echo pins
       int ena;
       int in1;
       int in2;
       int in3;
       int in4;
       int enb;

     
       
  
};

#endif
