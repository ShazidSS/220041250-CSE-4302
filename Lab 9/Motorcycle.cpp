#include "Motorcycle.h"
Motorcycle::Motorcycle(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType):GasolineVehicle(licencePlate, manufacturer, sizeLimit,fuelCapacity, fuelType)
{
    setFuelConsumptionRate(14);
    setType("Motorcycle");
}
void Motorcycle::performanceMaintanance()
{
    cout<<"Motorcycle - maintanance"<<"\n";
}

