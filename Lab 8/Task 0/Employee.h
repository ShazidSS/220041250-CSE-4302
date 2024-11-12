#pragma once
#include <string>
using namespace std;
class Employee
{
protected: 
    string _name;
    string _id;
    string _employeeType;
public:
    Employee(string name, string id);
    string getName();
    string getId();
    string getEmployeeType();
};


class Manager:public Employee
{
    public:
    Manager(string name, string id);
};

class Driver:public Employee
{
public:
    Driver(string name, string id);
};
