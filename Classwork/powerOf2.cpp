#include<iostream>
using namespace std;

int power(int num,int n)
{
    if(n==0)
    return 1;
    return num*power(num,n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<power(2,n)<<endl;
    return 0;
}