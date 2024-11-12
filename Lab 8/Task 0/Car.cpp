#include "Car.h"
Car::Car(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType,int passengerNum):GasolineVehicle(licencePlate,manufacturer,sizeLimit,fuelCapacity,fuelType),_pasangerNum(passengerNum)
{
    setType("Car");
}
