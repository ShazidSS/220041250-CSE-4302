#include "Vehicles.h"
Vehicles::Vehicles(string licencePlate, string manufacturer, float sizeLimit):_manufacturer(manufacturer),_licencePlate(licencePlate),_sizeLimit(sizeLimit)
{
   v_count++; 
}
int Vehicles::v_count=-1;
string Vehicles::getManufacturer()
{
    return _manufacturer;
}
string Vehicles::getLicencePlate()
{
    return _licencePlate;
}
float Vehicles::getSizeLimit()
{
    return _sizeLimit;
}
void Vehicles::setManufacturer(string manufacturer)
{
    _manufacturer = manufacturer;
}
void Vehicles::setLicencePlate(string licencePlate)
{
    _licencePlate = licencePlate;
}
void Vehicles::setSizeLimit(float sizeLimit)
{
    _sizeLimit = sizeLimit;
}
void Vehicles::sort_vehicles_by_capacity(Vehicles** vehicles, int n)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n-1; j++)
        {
            if(vehicles[j]->getSizeLimit()<vehicles[j+1]->getSizeLimit())
            {
                Vehicles* temp = vehicles[j];
                vehicles[j] = vehicles[j+1];
                vehicles[j+1] = temp;
            }
        }
}
string Vehicles::getType()
{
    return _type;
}
void Vehicles::setType(string type)
{
    _type=type;
}
int Vehicles::getVehicleCount()
{
    return v_count;
}






