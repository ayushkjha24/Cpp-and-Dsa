//Print all odd number from n to 1 using recursion
#include<iostream>
using namespace std;

void printOdd(int n)
{
    if(n==1)
    {
        cout<<1;
        return ;
    }
    cout<<n<<" ";
    printOdd(n-2);
}
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    n--;
    printOdd(n);
    return 0;
}
