#include<iostream>
using namespace std;
int main(){
    for(int i=4;i>=1;i--){
        for(int j=1;j<=i;j++){
            char value='A'+j-1;
            cout<<value<<" ";
        }
        cout<<endl;
    }
}