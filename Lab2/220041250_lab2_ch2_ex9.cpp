#include<iostream>
using namespace std;
void AddFraction()
{
    int a,b,c,d;
    char g;
    cout<<"Enter first fraction: ";
    cin>>a>>g>>b;
    cout<<"Enter second fraction: ";
    cin>>c>>g>>d;
    cout<<"Sum is: "<<(a*d)+(b*c)<<'/'<<b*d;
}

int main()
{
    AddFraction();
    return 0;
}