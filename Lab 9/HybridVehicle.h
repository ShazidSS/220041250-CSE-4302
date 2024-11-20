#pragma once
#include "ElectricVehicle.h"
#include "GasolineVehicle.h"

class HybridVehicle:public GasolineVehicle,public ElectricVehicle
{
    float energyGenerationEfficiency;
    float energy;
    
public:
    HybridVehicle(string licencePlate, string manufacturer, float sizeLimit,float fuelCapacity, string fuelType,float bataryCap,float chargingTime);
    float getEnergyGenerationEfficiency();
    void setEnergyGenerationEfficiency(float energyGenerationEfficiency);
    void performanceMaintanance() override;
    void ConvertEnergy();
    double calculateFuelConsumption(double distance);
    
};
