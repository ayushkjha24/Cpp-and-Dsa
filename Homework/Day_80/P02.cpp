//Write a recursive function to reverse the elements of an array

#include<iostream>
using namespace std;

void reverseArray(int arr[], int start,int end)
{
    if(start>=end)
    return;
    swap(arr[start],arr[end]);
    return reverseArray(arr,start+1,end-1);
}

int main()
{
    int arr[]={5,6,3,6,9,1,3,4};
    reverseArray(arr,0,7);
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
    return 0;
}