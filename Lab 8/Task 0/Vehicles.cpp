#include "Vehicles.h"
Vehicles::Vehicles(string licencePlate, string manufacturer, float sizeLimit):_manufacturer(manufacturer),_licencePlate(licencePlate),_sizeLimit(sizeLimit)
{
    
}
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



