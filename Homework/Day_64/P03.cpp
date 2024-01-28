//Print the address of String in c++

#include<iostream>
using namespace std;

int main()
{
    string s="Ayush";
    string *ptr=&s;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&s+1<<endl;
    cout<<&s[0]<<endl;
}