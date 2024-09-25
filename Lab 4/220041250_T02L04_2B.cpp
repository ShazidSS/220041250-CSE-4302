#include<bits/stdc++.h>
using namespace std;
int created;
int present;
float totalTax;

enum accountType
{
    current,saving
};
class BankAccount
{
    private:
        int _accountNum;
        string _name;
        accountType _type;
        float _currentBalance;
        const float _minimumBalance;
        float _interest;

        
    public:
        BankAccount(int accountNUm,string name,accountType type,float currentBalance,float minimumBalance):_minimumBalance(minimumBalance),_interest(3)
        {
            _accountNum=accountNUm;
            _name=name;
            _type=type;
            _currentBalance=currentBalance;
            created++;
        }
        void showDetails()
        {
            cout<<"Account number: "<<_accountNum<<endl;
            cout<<"Holder name: "<<_name<<endl;
            cout<<"Current balance: "<<_currentBalance<<endl;
            cout<<"Minimum balance: "<<_minimumBalance<<endl;
            if(_type==accountType::saving)
                cout<<"Account type: saving"<<endl;
            else cout<<"Account type: current"<<endl;

        }
        void showBalance()
        {
            cout<<"Current balance: "<<_currentBalance<<endl;
        }
        static float getBalance(const BankAccount a)
        {
            return a._currentBalance;
        }
        void deposite(float value)
        {
            if(value<=0)
                cout<<"Invalid amount"<<endl;
            else
                _currentBalance+=value;
        }
        void withdraw(float value)
        {
            if(value<=0)
            {
                cout<<"Invalid amount"<<endl;
                return;
            }
            float temp=_currentBalance-value;
            if(temp<_minimumBalance)
                cout<<"Cant withdraw"<<endl;
            else
            {
                _currentBalance-=value;
            }
        }
        void giveInterest(int value=3)
        {
            float interest=(_currentBalance)*((float)value/100);
            float tax=(interest)*0.1;
            _currentBalance+=interest-tax;
            totalTax+=tax;
        }
        
        ~BankAccount()
        {
            cout<<"Account of Mr. "<<_name<< " with account NO "<<_accountNum<<" is destroyed with a balance of Bdt "<<_currentBalance<<endl;

        }
};
void display_stat()
{
    cout<<"Objects created: "<<created<<endl;
    cout<<"Object present: "<<created<<endl;
    cout<<"Total tax collected: "<<totalTax<<endl;
}
BankAccount Larger(const BankAccount a, const BankAccount b)
{
    if(BankAccount::getBalance(a)>BankAccount::getBalance(b))
        return a;
    else return b;

}

int main()
{

    BankAccount b(10,"X",accountType::current,10000,5000);
    b.showDetails();
    b.deposite(1000);
    b.showBalance();
    b.withdraw(10000);
    b.giveInterest(15);
    b.showBalance();
    BankAccount c(10,"Y",accountType::current,20000,5000);
    c.giveInterest();
    display_stat();
}