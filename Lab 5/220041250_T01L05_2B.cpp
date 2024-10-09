#include"student.h"
using namespace std;

void EditInformationKeyboard(Student& student)
{
    string info;
    if(info=="name"){
        string change;
        cin>>change;
        student.setName(change);

    }
    else if(info=="address"){
        string change;
        cin>>change;
        student.setAddress(change);

    }
    else if(info=="department"){
        string change;
        cin>>change;
        student.setDept(change);

    }
    else if(info=="section"){
        string change;
        cin>>change;
        student.setSection(change);

    }
    else if(info=="program"){
        string change;
        cin>>change;
        student.setProgram(change);

    }
    
}

void ShowAlphabetically(Student students[])
{
    
}
int main()
{
    Student s;
    s.setName("ABc");
    cout<<s.getName();

}
