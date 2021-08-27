#ifndef TB67H450_H
#define TB67H450_H
#include<stdint.h>

class TB67H450
{
private:
    int8_t motor_in1,motor_in2;
public:
    TB67H450();
    TB67H450(int8_t,int8_t);
    void start(int8_t,int8_t);
    void normal(uint8_t=255);
    void reverse(uint8_t=255);
    void stop();
    void brake();
};

#endif