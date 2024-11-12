#include "GasolineVehicle.h"
GasolineVehicle::GasolineVehicle(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType):Vehicles(licencePlate,manufacturer,sizeLimit),_fuelCapacity(fuelCapacity),_fuelType(fuelType)
{
    _type="GasolineVehicle";
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


