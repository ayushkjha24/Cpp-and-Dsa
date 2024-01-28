#include<iostream>
using namespace std;

void fun(int n)
{
    //base case
    if(n==0)
    {
        cout<<"Happy Birthday\n";
        return;
    }
    cout<<n<<" days left for birthday\n";
    fun(n-1);
}
int main()
{
    // int n=5;
    // //Itereative approach
    // for(int i=n;i>0;i--)
    // {
    //     cout<<i<<" days left for birthday \n";
    // }
    // cout<<"Happy birthday\n";

    int n;
    cin>>n;
    fun(n);
}

