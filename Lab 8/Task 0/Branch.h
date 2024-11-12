#pragma once
#include <vector>

#include "Car.h"
#include "ElectricVehicle.h"
#include "Employee.h"
#include "Motorcycle.h"
#include "Truck.h"
class Branch
{
    private:
    vector<Car> cars;
    vector<Truck> trucks;
    vector<ElectricVehicle> electricVehicles;
    vector<Manager> managers;
    vector<Driver> drivers;
    int motorcycleCounter;
    int carCounter ;
    int truckCounter ;
    int electricVehicleCounter ;
    int managerCounter ;
    int driverCounter ;
public:
    Branch();
    void printNames();
    void addManager(Manager);
    void addDriver(Driver);
    void addCar(Car);
    void addTruck(Truck);
    void addElectricVehicle(ElectricVehicle);
    void printTruckDetails();
    static void vehicleCheck(GasolineVehicle*);
};

