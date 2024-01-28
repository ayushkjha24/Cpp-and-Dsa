//Write a Table program using recursion.
//Take input number n, and print its table

#include<iostream>
using namespace std;

void printTable(int n,int num)
{
    if(n==10)
    {
        cout<<n*num<<" ";
        return ;
    }
    cout<<n*num<<" ";
    printTable(n+1,num);
}

int main()
{
    int n;
    cin>>n;
    printTable(1,n);
    return 0;
}