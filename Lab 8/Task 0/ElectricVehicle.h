#pragma once
#include <string>
using namespace std;
#include "Vehicles.h"
using namespace std;
class ElectricVehicle:public Vehicles
{
    protected:
    float _bataryCapacity;
    float _chargingTime;
public:
    ElectricVehicle(std::string licencePlate, string manufacturer, float sizeLimit,float bataryCapacity, float chargingTime);
    float getBataryCapacity();
    float getChargingTime();
};
