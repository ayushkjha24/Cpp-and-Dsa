//Sum of cubes of N natural numbers using Recursion

#include<iostream>
using namespace std;

int sumOfCubes(int n)
{
    // if(n==1)
    // return 1   
    if(n==0)
    return 0;
    return n*n*n + sumOfCubes(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumOfCubes(n)<<endl;
    return 0;
}