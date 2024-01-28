//Print all numbers from 1 to n using recursion.
#include<iostream>
using namespace std;

void print(int n)
{
    if(n==1)
    {
        cout<<1<<" ";
        return ;
    }
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}