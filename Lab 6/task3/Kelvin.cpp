#include"Celsius.h"
#include<iostream>
#include"Kelvin.h"
#include"Farenheit.h"

using namespace std;

Kelvin::Kelvin():_temp(0){};
Kelvin::Kelvin(float temp)
{
    if(temp<0)
    {
        cout<<"Cant go under 0K"<<endl;
    }
    else
        _temp=temp;
}
void Kelvin::assign(float value)
{
    if(value<0)
        cout<<"Cant assign"<<endl;
    else
    {
        _temp=value;
    }
}
void Kelvin::display() const
{
    cout<<"The temperature is "<<_temp<<" celsius"<<endl;
}
Kelvin::operator Celsius()
{
    float f=_temp-273.15;
    return Celsius(f);
}
// Kelvin::operator Farenheit()
// {
//     float f=(9/5)*(_temp-273.15)+32;
//     return Farenheit(f);
// }


