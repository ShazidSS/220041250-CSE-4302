#include "GasolineVehicle.h"

#include <iostream>

GasolineVehicle::GasolineVehicle(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType):Vehicles(licencePlate,manufacturer,sizeLimit),_fuelCapacity(fuelCapacity),_fuelType(fuelType)
{
    _type="GasolineVehicle";
    _fuelConsumptionRate=5;
}
float GasolineVehicle::getFuelCapacity()
{
    return _fuelCapacity;
}
string GasolineVehicle::getFuelType()
{
    return _fuelType;
}
void GasolineVehicle::setType(string type)
{
    _type = type;
}
string GasolineVehicle::getType()
{
    return _type;
}
void GasolineVehicle::performanceMaintanance()
{
    cout<<"GasolineVehicle maintanance"<<"\n";
}

float GasolineVehicle::getFuelConsumptionRate()
{
    return _fuelConsumptionRate;
}
void GasolineVehicle::setFuelConsumptionRate(float fuelConsumptionRate)
{
    _fuelConsumptionRate = fuelConsumptionRate;
}

double GasolineVehicle::calculateFuelConsumption(double distance)
{
    return distance*getFuelConsumptionRate();
}


