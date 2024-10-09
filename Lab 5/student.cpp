#include"student.h"
#include<iostream>
using namespace std;

Student::Student():_gpa(0){};
Student::Student(string name,string dept,string program,string section,int year,string address,float gpa):_name(name),_department(dept),_program(program),_section(section),_addmissionYear(year),_address(address),_gpa(gpa){};

string Student::getName()
{
    return _name;
}
void Student::setName(string name)
{ _name=name;}
string Student::getDept()
{
    return _department;
}
void Student::setDept(string dept)
{
    _department=dept;
}
void Student::setProgram(string prog)
{
    _program=prog;
}
string Student::getProgram()
{
    return _program;
}
void Student::setSection(string sec)
{
    _section=sec;
}
string Student::getSection()
{
    return _section;
}
void Student::setAddmissionYear(int year)
{
    _addmissionYear=year;
}

int Student::getAddmissionYear()
{
    return _addmissionYear;
}
void Student::setAddress(string address)
{
    _address=address;
}
string Student::getAddress()
{
    return _address;
}
float Student::getGpa()
{
    return _gpa;

}
void Student::setGpa(float gpa)
{
    _gpa=gpa;
}

void Student::calculateGPA(Course course)
{
    int total=0;
    for(int i=0;i<4;i++)
        total+=course.quiz[i];
    total+=course.final+course.mid+course.attendence;
    
}

void Student::generateID()
{
    string id="";
    int year=getAddmissionYear()%100;
    id+=to_string(year);
    id+="00";
    if(getDept()=="cse")
        id+="4";
    if(getProgram()=="bsc")
        id+=1;
    id+=getSection();

}