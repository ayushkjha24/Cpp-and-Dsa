//Given 2 matrices A and B, Print A-B
//print sum of each column in 2D array
#include<iostream>
using namespace std;

void printDiff(int arr1[][4],int arr2[][4],int row ,int col){
    
        for(int row=0;row<3;row++)
        {
        for(int col=0;col<4;col++)
        {
            cout<<arr1[row][col]-arr2[row][col]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={12,11,10,9,8,7,6,5,4,3,2,1};
    printDiff(arr1,arr2,3,4);
    cout<<endl;
    return 0;
}