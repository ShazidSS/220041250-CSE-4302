#include<iostream>
using namespace std;
struct fraction
{
    /* data */
    int numerator;
    int denominator;
};
void addFractionWithStruct()
{
    fraction f;
    int a,b,c,d;
    char g;
    cout<<"Enter first fraction: ";
    cin>>a>>g>>b;
    cout<<"Enter second fraction: ";
    cin>>c>>g>>d;
    f.numerator=(a*d)+(b*c);
    f.denominator=b*d;
    cout<<"Sum is: "<<f.numerator<<'/'<<f.denominator;
}

int main()
{
    addFractionWithStruct();
    return 0;
}