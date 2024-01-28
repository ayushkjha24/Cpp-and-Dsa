//Find the Maximum element in a given array of size N

#include<iostream>
using namespace std;

int Max(int arr[],int index,int N)
{
    if(index==N-1)
    return arr[index];
    return max(arr[index],Max(arr,index+1,N));
}

int main()
{
    int arr[]={5,6,2,9,1,8};
    cout<<Max(arr,0,6)<<endl;
    return 0;
}