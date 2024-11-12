#pragma once
#include <string>
using namespace std;
class Vehicles
{
    protected:
    string _licencePlate;
    string _manufacturer;
    float _sizeLimit;
    string _type;
    
public:
    Vehicles(string licencePlate, string manufacturer, float sizeLimit);
    string getLicencePlate();
    string getManufacturer();
    float getSizeLimit();
    void setLicencePlate(string licencePlate);
    void setManufacturer(string manufacturer);
    void setSizeLimit(float sizeLimit);
    string getType();
};
