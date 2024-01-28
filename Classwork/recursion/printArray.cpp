#include<iostream>
using namespace std;

void print(int arr[],int i,int n)
{
    if(i==n)
    return;
    cout<<arr[i]<<" ";
    print(arr,i+1,n);
}

int main()
{
    int arr[]={3,6,4,2,9};
    print(arr,0,5);
    return 0;
    
}