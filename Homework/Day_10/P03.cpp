#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=5;k>=n-i+1;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}