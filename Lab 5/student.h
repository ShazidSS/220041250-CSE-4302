#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
struct Course
{
    int quiz[4];
    int mid;
    int final;
    int attendence;
};

class Student
{
private:
    string _name;
    string _department;
    string _program;
    string _section;
    int _addmissionYear;
    string _address;
    float _gpa;
    Course _course;
    string ID;


public:
   Student();
   Student(string name,string dept,string program,string section,int year,string address,float gpa=0);
   string getName();
   void setName(string);

   string getDept();
   void setDept(string);

   void setProgram(string);
   string getProgram();

   void setSection(string);
   string getSection();

   void setAddmissionYear(int);
   int getAddmissionYear();

   void setAddress(string);
   string getAddress();

   float getGpa();
   void setGpa(float);

   void generateID();
    void calculateGPA(Course);



};
#endif //STUDENT_H

