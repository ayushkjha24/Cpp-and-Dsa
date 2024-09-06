//Encapsulation
#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number,balance;

    public:
    customer(string name,int account_number,int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
        else
        cout<<"Invalid amount"<<endl;
    }
    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
        }
        else
        cout<<"You can't withraw this amount\n";
    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }
};


int main()
{
customer A1("Ayush",51,1000);
customer A2("AyUsh",5,500);
A1.deposit(300);
A1.display();
A2.withdraw(-70);
A2.display();
}
