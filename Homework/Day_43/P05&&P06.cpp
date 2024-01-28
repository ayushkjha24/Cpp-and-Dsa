#include<iostream>
#include <climits>
using namespace std;

int findMax(int arr[4][3],int row,int col){
    int max=INT_MIN;
    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++){
            if(max<arr[row][col])
            max=arr[row][col];
        }
    }
    return max;
}
int findMin(int arr[4][3],int row,int col){
    int min=INT_MAX;
    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++){
            if(min>arr[row][col])
            min=arr[row][col];
        }
    }
    return min;
}
int main()
{
    int arr[4][3]={1,4,5,2,7,3,18,6,8,9,34,12};
    cout<<"Maximum : "<<findMax(arr,4,3)<<endl;
    cout<<"Manimum : "<<findMin(arr,4,3)<<endl;
    return 0;
}