
#include <iostream>
#include <ostream>

#include "Branch.h"
#include "Employee.h"
#include "GasolineVehicle.h"
using namespace std;
int main(int argc, char* argv[])
{
    Branch b;
    Manager m("A","12");
    b.addManager(m);
    Driver d("B","101");
    b.addDriver(d);
    b.addManager(Manager("C","13"));
    Truck t("HIFQI95","any",10,20,"petrol",30);
    b.addTruck(t);
    b.printNames();
}
