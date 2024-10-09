#ifndef CELSIUS_H
#define CELSIUS_H
#include"header.h"
class Celsius
{
    float _temp;
    public:
    Celsius();
    Celsius(float temp);
    operator Farenheit();
    //operator Kelvin();
    void assign(float);
    void display() const;

};


#endif