// Constructors and inheritance
#include<iostream>
using namespace std;

class Base
{
  public:
  Base()
  {
    cout<<"Default constructor of base class\n";
  }
  Base(int b){
    cout<<"Parameterized constructor of base class"<<b<<endl;
  }
};
class derived : public Base
{
  public:
  derived()
  {
    cout<<"Default constructor of derived class\n";
  }
  derived(int d) : Base(d)
  {
    cout<<"Para. const of derived class "<<d<<endl;
  }
};

int main()
{
  derived d;
  derived d1(6); //This will throw an error saying no matching constructor is found
}