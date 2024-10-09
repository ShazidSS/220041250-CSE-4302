#include"header.h"


using namespace std;

Celsius::Celsius():_temp(-273.15){};
Celsius::Celsius(float temp)
{
    if(temp<273.15)
    {
        cout<<"Cant go under -273.15"<<endl;
    }
    else
        _temp=temp;
}
void Celsius::assign(float value)
{
    if(value<273.15)
        cout<<"Cant assign"<<endl;
    else
    {
        _temp=value;
    }
}
void Celsius::display() const
{
    cout<<"The temperature is "<<_temp<<" celsius"<<endl;
}
Celsius::operator Farenheit()
{
    float f=_temp*(9/5)+32;
    return Farenheit(f);
}
// Celsius::operator Kelvin()
// {
//     float f=_temp+273.15;
//     return Kelvin(f);
// }


