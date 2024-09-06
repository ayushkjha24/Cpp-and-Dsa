#include<iostream>
using namespace std;

class customer
{
    string name;
    int *data;
    public:
    customer()
    {
        name="Ayush";
        data = new int;
        *data = 10;
        cout<<"Constructor is called"<<endl;
    }
    //destructor
    ~customer()
    {
        delete data;
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    customer A1;
}
