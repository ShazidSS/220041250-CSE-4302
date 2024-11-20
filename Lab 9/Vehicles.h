#pragma once
#include <string>
#include <vector>
using namespace std;
class Vehicles
{
    protected:
    string _licencePlate;
    string _manufacturer;
    float _sizeLimit;
    string _type;
    static int v_count;
    
public:
    
    Vehicles(string licencePlate, string manufacturer, float sizeLimit);
    string getLicencePlate();
    string getManufacturer();
    float getSizeLimit();
    void setLicencePlate(string licencePlate);
    void setManufacturer(string manufacturer);
    void setSizeLimit(float sizeLimit);
    string getType();
    void setType(string type);
    virtual void performanceMaintanance()=0;
    static void sort_vehicles_by_capacity(Vehicles** vehicles,int n);
    static int getVehicleCount();
};
