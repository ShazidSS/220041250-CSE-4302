#include"header.h"

using namespace std;

Farenheit::Farenheit():_temp(-273.15){};
Farenheit::Farenheit(float temp)
{
    if(temp<273.15)
    {
        cout<<"Cant go under -273.15"<<endl;
    }
    else
        _temp=temp;
}
void Farenheit::assign(float value)
{
    if(value<273.15)
        cout<<"Cant assign"<<endl;
    else
    {
        _temp=value;
    }
}
void Farenheit::display() const
{
    cout<<"The temperature is "<<_temp<<" celsius"<<endl;
}
Farenheit::operator Celsius()
{
    float f=_temp*(9/5)+32;
    return Celsius(f);
}
// Farenheit::operator Kelvin()
// {
//     float f=(5/9)*(_temp-32)+273.15;
//     return Kelvin(f);
// }


