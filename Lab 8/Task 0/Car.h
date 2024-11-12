#pragma once
#include "GasolineVehicle.h"

class Car:public GasolineVehicle
{
    int _pasangerNum;
public:
    Car(string,string,float,float,string,int);
    
};
