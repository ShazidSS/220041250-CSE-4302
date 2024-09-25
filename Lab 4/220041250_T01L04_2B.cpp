#include<bits/stdc++.h>
using namespace std;

class Calculator
{
    private:
        float _angle;
        float getCurrent()
        {
            return _angle;
        }
        void setCurrent(float value)
        {
            _angle=value;
        }
    public:
        Calculator():_angle(0)
        {}
        Calculator(float value)
        {
            float degree=(value*180)/3.14;
            _angle=degree;
        }
        float calculateSine()
        {

            return sin(_angle);
        }
        float calculateCosine()
        {

            return cos(_angle);
        }
        float calculateTangent()
        {
            int temp=(int)_angle;
            if(temp%360==90)
            {
                cout<<"Invalid operation: undefined result"<<endl;
                return _angle;
            }
            //cout<<(_angle*3.14)/180<<endl;
            
            return tan(_angle);
        }
        float calculateArcSine()
        {
            cout<<"Radian eqivalent: "<<(_angle*3.14)/180<<endl;
            return 1/sin(_angle);
        }
        float calculateArcCosine()
        {
            cout<<"Radian eqivalent: "<<(_angle*3.14)/180<<endl;
            return 1/cos(_angle);

        }
        float calculateArcTan()
        {
            int temp=(int)_angle;
            if(temp%360==0)
            {
                cout<<"Invalid operation: undefined result"<<endl;
                return _angle;
            }
            cout<<"Radian eqivalent: "<<(_angle*3.14)/180<<endl;
            return 1/tan(_angle);
        }

        void clear()
        {
            setCurrent(0);
        }
        void display()
        {
            cout<<getCurrent()<<endl;
        }
        static void calculateForAngle(float paramAngle)
        {
            cout<<"Sine: "<<sin(paramAngle)<<endl;
            cout<<"cos: "<<cos(paramAngle)<<endl;
            cout<<"tan: "<<tan(paramAngle)<<endl;

        }
        ~Calculator()
        {
            cout<<"destructor of calculator object is called"<<endl;
        }



};

int main()
{
    Calculator c(90);
    c.display();
    cout<<c.calculateSine()<<endl;
    cout<<c.calculateCosine()<<endl;
    cout<<c.calculateTangent()<<endl;
    cout<<c.calculateArcCosine()<<endl;
    cout<<c.calculateArcSine()<<endl;
    cout<<c.calculateTangent()<<endl;
    Calculator::calculateForAngle(100);
    c.clear();
    c.display();
}