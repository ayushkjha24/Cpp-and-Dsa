// Print “Coder Army” 10 times using recursion

#include<iostream>
using namespace std;

void Print(int n)
{
    if(n==0)
    return ;
    cout<<"Coder Army\n";
    Print(n-1);
    
}

int main()
{
    Print(10);
    return 0;
}