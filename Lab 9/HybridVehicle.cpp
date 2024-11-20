#include "HybridVehicle.h"
HybridVehicle::HybridVehicle(string licencePlate, string manufacturer, float sizeLimit, float fuelCapacity, string fuelType, float bataryCap, float chargingTime):GasolineVehicle(licencePlate,manufacturer,sizeLimit,fuelCapacity,fuelType),ElectricVehicle(licencePlate,manufacturer,sizeLimit,bataryCap,chargingTime)
{
    energyGenerationEfficiency=0.7;
    energy=0;
    GasolineVehicle::setType("Hybrid Vehicle");
    ElectricVehicle::setType("Hybrid Vehicle");
}
void HybridVehicle::ConvertEnergy()
{
    energy+=energyGenerationEfficiency*getFuelCapacity();
    //energy+=energyGenerationEfficiency*getChargingTime();
}
void HybridVehicle::performanceMaintanance()
{
    cout<<"Hybrid Vehicle - maintanace"<<"\n";
}
double HybridVehicle::calculateFuelConsumption(double distance)
{
    return 0;
}
