#include "Truck.h"
Truck::Truck(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType,float cargocap):GasolineVehicle(licencePlate,manufacturer,sizeLimit,fuelCapacity,fuelType),_cargoCapacity(cargocap)
{
    setType("truck");
}
