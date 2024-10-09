#include"header.h"

class Kelvin
{
    float _temp;
    public:
    Kelvin();
    Kelvin(float temp);
    operator Celsius();
    //operator Farenheit();
    void assign(float);
    void display() const;

};


//#endif