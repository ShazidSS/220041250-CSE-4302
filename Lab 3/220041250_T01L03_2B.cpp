#include<iostream>
using namespace std;
class Counter{
    private:
        int count=0;
        int _incrementValue=0;
        
    public:
        void setIncrementStep(int value)
        {
            _incrementValue=value;
        }
        int getCount(){
            return count;
        }
        void resetCounter(){
            count=0;
        }
        void increment()
        {
            count+=_incrementValue;
        }

};

int main()
{
    Counter c;
    cout<<c.getCount()<<endl;
    c.setIncrementStep(5);
    c.increment();
    cout<<c.getCount()<<endl;
    c.resetCounter();
    cout<<c.getCount()<<endl;
    return 0;



}