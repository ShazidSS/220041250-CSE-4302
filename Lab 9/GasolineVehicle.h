#pragma once
#include "Vehicles.h"

class GasolineVehicle:public Vehicles
{
    float _fuelCapacity;
    string _fuelType;
    float _fuelConsumptionRate;
public:
    GasolineVehicle(string licencePlate, string manufacturer, float sizeLimit,float fuelCapacity, string fuelType);
    float getFuelCapacity();
    string getFuelType();
    void setType(string);
    string getType();
    void performanceMaintanance() override;
    double calculateFuelConsumption(double distance);
    float getFuelConsumptionRate();
    void setFuelConsumptionRate(float fuelConsumptionRate);
};
