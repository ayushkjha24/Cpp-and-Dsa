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
  //empty
};

int main()
{
  derived d;
  //derived d(6); This will throw an error saying no matching constructor is found
}