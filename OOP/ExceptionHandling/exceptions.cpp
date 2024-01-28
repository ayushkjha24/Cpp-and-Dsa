#include<iostream>
using namespace std;

class Customer
{
    string name;
    int balance,account_number;

    public:
    Customer(string name,int balance,int account_number)
    {
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    };
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<amount<<"rs is credited successfully\n";
        }
    }
    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance-=amount;
            cout<<amount<<"rs is debited succesfully\n";
        }
        else if(amount<0)
        {
            throw "amount should be greater than 0";
        }
        else
        {
            throw "Your balance is low";
        }
    }
};

int main()
{
    Customer C1("Ayush",300,51);

    try{
        C1.deposit(100);
        C1.withdraw(500);
        C1.deposit(200);
    }
    catch(const char *e)
    {
        cout<<"Exception Occured: "<<e<<endl;
    }

}