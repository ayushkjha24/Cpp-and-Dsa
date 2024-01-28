#include<iostream>
using namespace std;

class customer{
    string name;
    int account_number;
    int balance;
    public:
    //default constructor
    customer()
    {
        //cout<<"Default constructor is called "<<endl;
        name="Ayush";
        account_number = 123;
        balance = 1000;
    }
    //parameterized constructor
    customer(string name,int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }
    customer(string a,int b)
    {
        name=a;
        account_number = b;
    }

    //inline constructor
    inline customer(string a,int b,int c,char d):name(a),account_number(b),balance(c){}
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
    //copy constructor
    customer(customer &b)
    {
        name=b.name;
        account_number=b.account_number;
        balance=b.balance;
    }
};

int main()
{
    customer A1,A2;
    A1.display();
    A2.display();
    customer A3("AYUSH",51,500);
    A3.display();
    customer A4("Rohit",45);
    A4.display();
    customer A5("Shyam",34,56,'A');
    A5.display();
    customer A6(A3);
    A6.display();
    customer A7;
    A7=A6;
    A7.display();
}