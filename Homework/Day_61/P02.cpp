#include<iostream>
using namespace std;

int main()
{
   int num = 10;
   int *p = &num;


   // Increment num variable by 5 with the help of Pointer p
    *p+=5;
    cout<<num<<endl;
   // Don't do num = num+5;
   // Try to change it with the help of *p


}
