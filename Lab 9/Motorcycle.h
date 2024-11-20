#pragma once
#include "GasolineVehicle.h"
#include<iostream>
class Motorcycle:public GasolineVehicle
{
public:
    Motorcycle(string licencePlate, string manufacturer, float sizeLimit,float fuelCapacity, string fuelType);
    void performanceMaintanance() override;
    double calculateFuelConsumption(double distance);
};
