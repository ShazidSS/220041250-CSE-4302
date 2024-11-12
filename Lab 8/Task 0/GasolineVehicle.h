#pragma once
#include "Vehicles.h"

class GasolineVehicle:public Vehicles
{
    float _fuelCapacity;
    string _fuelType;
    string _type;
public:
    GasolineVehicle(string licencePlate, string manufacturer, float sizeLimit,float fuelCapacity, string fuelType);
    float getFuelCapacity();
    string getFuelType();
    void setType(string);
    string getType();
    
};
