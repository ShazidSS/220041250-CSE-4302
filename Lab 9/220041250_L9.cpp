#include <iostream>
#include <ostream>
#include "Car.h"
#include "ElectricVehicle.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "GasolineVehicle.h"
#include "HybridVehicle.h"
#include "Vehicles.h"
using namespace std;
int main(int argc, char* argv[])
{
    GasolineVehicle gasoline_vehicle("123","Any",40,50,"octane");
    ElectricVehicle electric_vehicle("456","Any",100,50,50);
    Car car("12345ABC","China",80,50,"petrol",5);
    Truck truck("12345DEFG","Bangladesh",200,50,"CNG",110);
    Motorcycle motorcycle("789","India",2,10,"petrol");
    HybridVehicle hybrid_vehicle("246","Nepal",150,30,"petrol",30,70);
    car.performanceMaintanance();
    truck.performanceMaintanance();
    gasoline_vehicle.performanceMaintanance();
    electric_vehicle.performanceMaintanance();
    motorcycle.performanceMaintanance();
    //hybrid_vehicle.performanceMaintanance();
    Vehicles* v[]={&gasoline_vehicle,&electric_vehicle,&car,&truck,&motorcycle};
    for(auto vehicle:v)
    {
        cout<<vehicle->getType()<<" - Carriage size limit: "<<vehicle->getSizeLimit()<<endl;
    }
    Vehicles::sort_vehicles_by_capacity(v,Vehicles::getVehicleCount());
    cout<<"\n";
    for(auto vehicle:v)
    {
        cout<<vehicle->getType()<<" - Carriage size limit: "<<vehicle->getSizeLimit()<<endl;
    }
    cout<<gasoline_vehicle.calculateFuelConsumption(12);
}