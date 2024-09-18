#include<iostream>
#include<string.h>
using namespace std;
class Medicine
{
    private:
        char _tradeName[30];
        char _genericName[30];
        double _price;
        double _discountPercent=5;
    public:
        void assignName(char name[],char genericName[] )
        {
            strcpy(_tradeName,name);
            strcpy(_genericName,genericName);
        }
        void assignPrice(double price)
        {
            if(price<0)
                _price=0;
            else _price=price;
        }
        void setDiscountPercent(double percent)
        {
            if(percent>0 && percent<=30)
                _discountPercent=percent;
        }

        double getSellingPrice(int nos=1)
        {
            return nos*(_price-(_price*(_discountPercent/100)));
        }
        void display()
        {
            printf("MRP. of %s (%s) is BDT %0.2lf. Current discount %0.2lf . Selling price BDT %0.2lf",_tradeName,_genericName,_price,_discountPercent,getSellingPrice(1));;
        }
};

int main()
{
    Medicine m;
    m.assignName("Napa","Paracetamol");
    m.assignPrice(1);
    m.setDiscountPercent(250);
    cout<<m.getSellingPrice(100)<<endl;
    m.display();
    return 0;
}