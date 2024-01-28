//print sum of each column in 2D array
#include<iostream>
using namespace std;

void colSum(int arr[][4],int row ,int col){
    
    for(int col=0;col<4;col++){
        int sum=0;
        for(int row=0;row<3;row++)
        {
            sum+=arr[row][col];
        }
        cout<<"Sum of "<<col<<" column :"<<sum<<endl;
    }
}

int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    colSum(arr,3,4);
    cout<<endl;
    return 0;
}