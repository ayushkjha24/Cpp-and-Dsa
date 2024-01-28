//Given a matrix of size n*n, Print sum of diagonal element
#include<iostream>
using namespace std;

int sumOfDiagonal(int arr[][3],int row,int col){
    int sum=0;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++)
        {
            if(row==col||row+col==2)
            sum+=arr[row][col];
        }
    }
    return sum;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<sumOfDiagonal(arr,3,3)<<endl;
    return 0;
}