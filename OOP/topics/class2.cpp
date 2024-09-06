//Static data member
#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number,balance;
    static int total_customer;
    static int total_balance;

    public:
    customer(string name,int account_number,int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance+=balance;
    }
    static void acceStatic()
    {
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            total_balance+=amount;
        }
    }
    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
            total_balance-=amount;
        }
    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }
};

int customer::total_customer=0;
int customer::total_balance = 0;
int main()
{
customer A1("Ayush",51,1000);
customer A2("AyUsh",5,500);
A2.display();
customer A3("Anjali",10,5000);
A3.display();
A1.deposit(600);
customer::acceStatic();
A2.withdraw(500);
customer::acceStatic();
}
