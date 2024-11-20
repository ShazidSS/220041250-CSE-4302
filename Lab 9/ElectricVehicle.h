#pragma once
#include <string>
using namespace std;
#include "Vehicles.h"
#include <iostream>
using namespace std;
class ElectricVehicle:public Vehicles
{
    protected:
    float _bataryCapacity;
    float _chargingTime;
    double _electricityConsumptionRate;
public:
    ElectricVehicle(std::string licencePlate, string manufacturer, float sizeLimit,float bataryCapacity, float chargingTime);
    float getBataryCapacity();
    float getChargingTime();
    void performanceMaintanance() override;
    double electricityConsumption(double distance);
    void setElectricityConsumption(double electricityConsumption);
    double getElectricityConsumptionRate();
};
