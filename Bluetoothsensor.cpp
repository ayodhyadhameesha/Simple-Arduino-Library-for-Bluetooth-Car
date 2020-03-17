
#include "Bluetoothsensor.h"
#include "Arduino.h"

Bluetoothsensor::Bluetoothsensor(int ENA,int IN1,int IN2,int IN3,int IN4,int ENB)
{

//Assigning the private variables
ena=ENA;
in1=IN1;
in2=IN2;
in3=IN3;
in4=IN4;
enb=ENB;
  
}

void Bluetoothsensor::pinSetups(){

//leftwheel
pinMode(ena,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
//rightwheel
pinMode(enb,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);


  
}

void Bluetoothsensor::Carforward(){

Serial.println("Car is moving forward");

//leftwheel
analogWrite(ena,255);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
//rightwheel
analogWrite(enb,255);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);

}

void Bluetoothsensor::Carbackward(){
Serial.println("Car is moving forward");

//leftwheel
analogWrite(ena,255);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
//rightwheel
analogWrite(enb,255);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);


}
void Bluetoothsensor::Carright(){

Serial.println("Car is moving right");
delay(200);

//leftwheel
analogWrite(ena,200);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
//rightwheel
analogWrite(enb,100);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
}

//If you can take all three calibrating sensors to one function
void Bluetoothsensor::Carleft(){

Serial.println("Car is moving left");
delay(200);

//leftwheel
analogWrite(ena,100);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
//rightwheel
analogWrite(enb,200);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
}

void Bluetoothsensor::Carstop(){

Serial.println("Car is stopped");

//leftwheel
analogWrite(ena,0);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
//rightwheel
analogWrite(enb,0);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
}
