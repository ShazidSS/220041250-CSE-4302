#include "ElectricVehicle.h"
ElectricVehicle::ElectricVehicle(std::string licencePlate, string manufacturer, float sizeLimit, float bataryCapacity, float chargingTime):Vehicles(licencePlate,manufacturer,sizeLimit),_bataryCapacity(bataryCapacity),_chargingTime(chargingTime)
{
    _type="ElectricVehicle";
}
float ElectricVehicle::getBataryCapacity()
{
    return _bataryCapacity;
}
float ElectricVehicle::getChargingTime()
{
    return _chargingTime;
}

