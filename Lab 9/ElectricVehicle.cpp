#include "ElectricVehicle.h"
ElectricVehicle::ElectricVehicle(std::string licencePlate, string manufacturer, float sizeLimit, float bataryCapacity, float chargingTime):Vehicles(licencePlate,manufacturer,sizeLimit),_bataryCapacity(bataryCapacity),_chargingTime(chargingTime)
{
    _type="ElectricVehicle";
    _electricityConsumptionRate=7;
}
float ElectricVehicle::getBataryCapacity()
{
    return _bataryCapacity;
}
float ElectricVehicle::getChargingTime()
{
    return _chargingTime;
}
double ElectricVehicle::electricityConsumption(double distance)
{
    return distance*getElectricityConsumptionRate();
}
void ElectricVehicle::performanceMaintanance()
{
    cout<<"Electrict vehicle maintanace"<<"\n";
}
double ElectricVehicle::getElectricityConsumptionRate()
{
    return _electricityConsumptionRate;
}
void ElectricVehicle::setElectricityConsumption(double electricityConsumption)
{
    _electricityConsumptionRate=electricityConsumption;
}



