#include "Branch.h"
#include <iostream>
using namespace std;
Branch::Branch():motorcycleCounter(0),carCounter(0),truckCounter(0),managerCounter(0),driverCounter(0),electricVehicleCounter(0)
{
}
void Branch::printNames()
{
    for(int i=0;i<managerCounter;i++)
    {
        cout<<"Mr. "<<managers[i].getName()<<endl;
    }
    for(int i=0;i<driverCounter;i++)
    {
        cout<<drivers[i].getName()<<endl;
    }
}
void Branch::addManager(Manager manager)
{
    if(managerCounter>10)
    {
        cout<<"cant add"<<endl;
        return;
    }
    managers.push_back(manager);
    managerCounter++;
}
void Branch::addDriver(Driver driver)
{
    if(driverCounter>30)
    {
        cout<<"cant add"<<endl;
        return;
    }
    drivers.push_back(driver);
    driverCounter++;
}
void Branch::addTruck(Truck truck)
{
    truckCounter++;
    trucks.push_back(truck);
}
void Branch::addCar(Car car)
{
    cars.push_back(car);
}
void Branch::addElectricVehicle(ElectricVehicle electric_vehicle)
{
    electricVehicles.push_back(electric_vehicle);
}
void Branch::vehicleCheck(GasolineVehicle* v)
{
    cout<<v->getType()<<" -Maintenance"<<"\n";
}
void Branch::printTruckDetails()
{
    for(int i=0;i<truckCounter;i++)
    {
        cout<<"Manufacturer: "<<trucks[i].getManufacturer()<<"\n";
        cout<<"Licence Plate: "<<trucks[i].getLicencePlate()<<"\n";
    }
}





