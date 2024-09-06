#include<iostream>
using namespace std;
class A{
  public:
  int a=10;
virtual void show()
  {
    cout<<"I'm in class A "<<a<<endl;
  }
};
class B : public A{
public:
int b=20;
void show()
{
  cout<<"I'm in class B "<<b<<endl;
}
};
class C : public A{
public:
int c=30;
void show()
{
  cout<<"I'm in class C "<<c<<endl;
}
};
class Person{
  public:
  string name;
  int age;
  Person(string name,int age)
  {
    this->name=name;
    this->age=age;
  }
  void print()
  {
    cout<<name<<" "<<age<<endl;
  }
};
int main()
{
  A* ptr =new B();
  A* ptr2 = new C();
  (*ptr).show();
  ptr2->show();
  Person A("Ayush",21);
  A.print();
}