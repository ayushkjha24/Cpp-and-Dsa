/*The using keyword in C++ is a tool that allows developers to 
specify the use of a particular namespace. This is especially 
useful when working with large codebases or libraries where there
may be many different namespaces in use. The using keyword can 
be used to specify the use of a single namespace, 
or multiple namespaces can be listed using the using keyword.*/

#include<iostream>
using namespace std; //using for namespaces
using ll =  long long; // Here we alias "ll" to stand for long long and save typing it out

using std::cout; //using for directives
using std::endl; //using for directives

class Base {
public:
    int x;

    // parameterized constructor
    Base(int a) : x(a){};
};

class Derived : public Base {
public:
    int y;
    using Base::Base; //using for inheritence
};

int main()
{

    Derived d(42);
    d.y = 12;
    cout << d.x << " " << d.y << '\n';
    ll a=40;
    cout<<a<<endl;
    return 0;
}