#pragma once
#include "GasolineVehicle.h"
#include<iostream>
class Car:public GasolineVehicle
{
    int _pasangerNum;
public:
    Car(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType,int passengerNum);
    int getPasangerNum();
    void performanceMaintanance() override;
};
