//Print all numbers from 10 to n using recursion, where n will be greater than 10

#include<iostream>
using namespace std;

void print(int num , int n)
{
    if(num==n){
        cout<<num<<" ";
        return ;
    }
    cout<<num<<" ";
    print(num+1,n);
}

int main()
{
    int n;
    cin>>n;
    print(10,n);
    return 0;
}