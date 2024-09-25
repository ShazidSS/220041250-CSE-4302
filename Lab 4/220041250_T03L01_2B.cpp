#include<bits/stdc++.h>
using namespace std;
class Employee
{
    private:
        string _name;
        int _id;
        int _age;
        float _salary;
        string getStatus()
        {
            if(_age<=25){
                if(_salary<=20000)
                    return "Low";
                else return "Moderate";
            }
            
            if(_age>25){
                if(_salary<=21000)
                    return "Low";
                else if(_salary>21000 && _salary<=60000)
                    return "Moderate";
                else return "High";
            }
            return " ";
        }
    public:
        Employee(string name,int id,float salary,int age):_name(name),_id(id),_salary(salary),_age(age){}
        void FeedInfo(string name,int id,float salary)
        {
            _name=name;
            _id=id;
            _salary=salary;
        }
        void ShowInfo()
        {
            cout<<"Name: "<<_name<<endl;
            cout<<"id: "<<_id<<endl;
            cout<<"age: "<<_age<<endl;
            cout<<"salary: "<<_salary<<endl;
            if(getStatus()=="Low")
                cout<<"Low salaried person"<<endl;
            else if(getStatus()=="High")
                cout<<"High salaried person"<<endl;
            else
                cout<<"Moderate salaried person"<<endl;
        }

};

int main()
{
    Employee e("Z",10,80000,50);
    e.ShowInfo();
}