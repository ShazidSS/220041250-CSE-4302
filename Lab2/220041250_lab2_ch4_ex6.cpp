#include<iostream>
using namespace std;
void employeeType()
{
    char c;
    cout<<"Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher): ";
    cin>>c;
    switch(c)
    {
        case 'l':
            cout<<"Employee type is laborer";
            break;
        case 's':
            cout<<"Employee type is secretary";
            break;
        case 'm':
            cout<<"Employee type is manager";
            break;
        case 'a':
            cout<<"Employee type is accountant";
            break;
        case 'e':
            cout<<"Employee type is executive";
            break;
        case 'r':
            cout<<"Employee type is researcher";
            break;
        
    }
}

int main()
{
    employeeType();
    return 0;
}