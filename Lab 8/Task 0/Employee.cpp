#include "Employee.h"
Employee::Employee(string name, string id):_name(name),_id(id)
{
    
}
Manager::Manager(string name, string id):Employee( name,id)
{
    _employeeType="Manager";
}


Driver::Driver(string name, string id):Employee( name,id)
{
    _employeeType="Driver";
}


string Employee::getEmployeeType()
{
    return _employeeType;
}
string Employee::getName()
{
    return _name;
}





