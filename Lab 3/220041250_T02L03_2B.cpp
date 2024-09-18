#include<iostream>
using namespace std;
class RationalNumber
{
    private:
        int _numerator=0;
        int _denominator=1;
        bool checkZero(int value)
        {
            return value==0;
        }
    public:
        void assign(int numerator,int denominator)
        {
            if(checkZero(denominator))
                cout<<"You cannot assign 0 as denominator"<<endl;
            else
            {
                _numerator=numerator;
                _denominator=denominator;
            }
        }
        double convert()
        {
            return (double)_numerator/_denominator;
        }
        void invert()
        {
            if(checkZero(_numerator))
                cout<<"You can not assign 0 as denominator.Inversion failed"<<endl;
            else
            {
                int temp=_numerator;
                _numerator=_denominator;
                _denominator=temp;
            }
        }
        void print()
        {
            cout<<"The Rational Number is "<<_numerator<<"/"<<_denominator<<endl;
        }
};

int main()
{
    RationalNumber r;
    r.assign(0,0);
    r.print();
    cout<<r.convert()<<endl;
    r.invert();
    r.print();
    cout<<r.convert()<<endl;
    return 0;
}