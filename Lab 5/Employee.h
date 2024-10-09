#ifndef EMPLOYEE
#define EMPLOYEE
#include<string>
using namespace std;
enum Month
{
    jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec
};

struct DOB
{
    int date;
    Month month;
    int year;
};

class Employee
{
private:
    string _name;
    DOB _dob;
    float _salary;
public:
    Employee();
    Employee(string,DOB,float);

    string getName();
    void setName(string);

    void setDOB(DOB);
    DOB getDOB();

    float getSalary();
    void setSalary(float);
    
    void setInfo(string,DOB,float);
    void getInfo();

    Employee& compareAge(Employee& e) const;


};
#endif //EMPLOYEE