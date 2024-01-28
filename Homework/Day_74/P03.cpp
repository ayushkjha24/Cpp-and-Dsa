//Given a Number N, check whether it is prime or not using Recursion

#include<iostream>
using namespace std;

bool checkPrime(int n,int x)
{
    if(x==1){
    return 1;
    }
    if(n%x==0){
    return 0;
    }
    return checkPrime(n,x-1);
}

int main()
{
    int n;
    cin>>n;
    if( checkPrime(n,n-1))
    cout<<"Yes\n";
    else
    cout<<"No\n";
    return 0;
}