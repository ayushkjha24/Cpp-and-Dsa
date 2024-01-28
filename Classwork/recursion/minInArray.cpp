#include<iostream>
using namespace std;

int Min(int arr[],int i,int size)
{
    if(i==size-1)
    return arr[i];
    return min(arr[i],Min(arr,i+1,size));
}

int main()
{
    int arr[]={3,4,7,2,1};
    cout<<Min(arr,0,5)<<endl;
    return 0;
}