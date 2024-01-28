#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    cout<<"Sum of square of first n is "<<sum<<endl;
    sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(i*i*i);
    }
    cout<<"Sum of cube of first n is "<<sum<<endl;

}