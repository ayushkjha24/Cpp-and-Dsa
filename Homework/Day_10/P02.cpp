#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=i;k>=1;k--){
            char value='A'+i-1;
            cout<<value<<" ";
        }
        cout<<endl;
    }
}