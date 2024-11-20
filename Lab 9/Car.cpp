#include "Car.h"
Car::Car(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType,int passengerNum):GasolineVehicle(licencePlate,manufacturer,sizeLimit,fuelCapacity,fuelType),_pasangerNum(passengerNum)
{
    setType("Car");
    setFuelConsumptionRate(7);
}
int Car::getPasangerNum()
{
    return _pasangerNum;
}
void Car::performanceMaintanance()
{
    cout<<"Car - maintanance"<<"\n";
}

