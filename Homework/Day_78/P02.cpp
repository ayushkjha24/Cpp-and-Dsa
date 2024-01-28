//Find the Product of all elements in a given array of size N

#include<iostream>
using namespace std;

int Product(int arr[],int index,int N)
{
    if(index==N-1)
    return arr[index];
    return (arr[index]*Product(arr,index+1,N));
}

int main()
{
    int arr[]={5,6,2,9,1,8};
    cout<<Product(arr,0,6)<<endl;
    return 0;
}