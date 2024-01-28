//Given an array in non-increasing order, an element is given X,
//find if that element is present in the array or not.
//print 1 if its present else print 0

#include<iostream>
using namespace std;
bool binarySearch(int arr[],int start,int end,int X)
{
    if(start>end)
    return 0;
    int mid =start+(end-start)/2;
    if(arr[mid]==X)
    return 1;
    else if(arr[mid]<X)
    return binarySearch(arr,start,mid-1,X);
    else
    return binarySearch(arr,mid+1,end,X);
}

int main()
{
    int arr[]={19,13,11,9,7,6,4};
    int X=7;
    cout<<binarySearch(arr,0,5,X)<<endl;
    return 0;
}