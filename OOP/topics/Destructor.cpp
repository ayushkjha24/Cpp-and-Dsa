#include<iostream>
using namespace std;

class customer
{
    string name;
    int *data;
    public:
    customer()
    { 
        name = "4";
        cout<<" constructor is "<<name<<endl;

    }
    customer(string name)
    {
        this->name=name;
        cout<<" constructor is "<<name<<endl;
    }
    ~customer()
    {
        cout<<" destructor is "<<name<<endl;
    }
};

int main()
{
    customer A1("1"),A2("2"),A3("3");
    customer *A4 = new customer;
    delete A4;
}