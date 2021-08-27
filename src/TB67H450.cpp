#include "Arduino.h"
#include "TB67H450.h"
#include<stdlib.h>

TB67H450::TB67H450(){}

TB67H450::TB67H450(int8_t motor_in1,int8_t motor_in2){
    start(motor_in1,motor_in2);
}

void TB67H450::start(int8_t motor_in1,int8_t motor_in2){
    this -> motor_in1=motor_in1;
    this -> motor_in2=motor_in2;
}

void TB67H450::normal(uint8_t speed){
    analogWrite(this ->motor_in1,speed);
    analogWrite(this ->motor_in2,0);
}

void TB67H450::reverse(uint8_t speed){
    analogWrite(this ->motor_in1,0);
    analogWrite(this ->motor_in2,speed);
}

void TB67H450::stop(){
    digitalWrite(this ->motor_in1,LOW);
    digitalWrite(this ->motor_in2,LOW);
}

void TB67H450::brake(){
    digitalWrite(this ->motor_in1,HIGH);
    digitalWrite(this ->motor_in2,HIGH);
}



