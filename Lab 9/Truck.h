﻿#pragma once
#include "GasolineVehicle.h"
#include<iostream>
class Truck:public GasolineVehicle
{
    float _cargoCapacity;
public:
    Truck(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType,float cargocap);
    float getCargoCapacity();
    void performanceMaintanance() override;
    
    
};