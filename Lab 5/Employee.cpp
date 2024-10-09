#include"Employee.h"
#include<iostream>
using namespace std;

Employee::Employee()
{
    _name="John Doe";
}
Employee::Employee(string name,DOB dob,float salary)
{
    _name=name;
    _dob=dob;
    _salary=salary;
}

string Employee::getName(){return _name;}
DOB Employee::getDOB(){return _dob;}
float Employee::getSalary(){return _salary;}
void Employee::setName(string name)
{
    if(name.size()<2)
        _name="John Doe";
    else
        _name=name;
}

void Employee::setDOB(DOB dob)
{
    if(2024-dob.year<=18)
    {
        _dob.date=1;
        _dob.month=Month::jan;
        _dob.year=2002;
    }
    else
    {
        _dob.date=dob.date;
        _dob.month=dob.month;
        _dob.year=dob.year;
    }
}
void Employee::setSalary(float salary)
{
    if(salary<=10000 && salary>=100000)
        _salary=10000;
    else 
        _salary=salary;
}

void Employee::setInfo(string name,DOB dob,float salary)
{
    Employee::setName(name);
    Employee::setDOB(dob);
    Employee::setSalary(salary);
    
}

void Employee::getInfo()
{
    cout<<"Name: "<<getName()<<endl;
    DOB d=getDOB();
    cout<<"Date of birth: "<<d.date<<" "<<d.month<<" "<<d.year<<endl;;
    cout<<"Salary: "<<getSalary()<<endl;
}

Employee& Employee::compareAge(Employee& emp) const
{
    // Employee temp=this;
    if(emp._dob.year>_dob.date)
        return emp;
    else if(emp._dob.month>_dob.month)
        return emp;
    else if(emp._dob.date>_dob.date)
        return emp;
    return;
}