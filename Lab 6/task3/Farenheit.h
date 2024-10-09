#ifndef FARENHEIT_H
#define FARENHEIT_H
#include"header.h"

class Farenheit
{
    float _temp;
    public:
    Farenheit();
    Farenheit(float temp);
    operator Celsius();
    //operator Kelvin();
    void assign(float);
    void display() const;

};


#endif