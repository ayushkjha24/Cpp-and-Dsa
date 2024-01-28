//Find the Number of even elements in a given array of size N

#include<iostream>
using namespace std;

int countEven(int arr[],int index,int N)
{
    if(index==N)
    return 0;
    return (arr[index]%2==0)+countEven(arr,index+1,N);
}

int main()
{
    int arr[]={5,6,2,9,1,8,10,3,14};
    cout<<countEven(arr,0,9)<<endl;
    return 0;
}