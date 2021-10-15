#include<TB67H450.h>

TB67H450 motor(2,3);

void setup(){
    Serial.begin(9600);
}

void loop()
{   
    Serial.println("normal");
    motor.normal(150);
    delay(2000);
    Serial.println("reverse");
    motor.reverse(150);
    delay(2000);
    Serial.println("brake");
    motor.brake();
    delay(2000);
    Serial.println("stop");
    motor.stop();
    delay(2000);
}
