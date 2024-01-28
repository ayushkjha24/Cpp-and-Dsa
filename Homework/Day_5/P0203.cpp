#include<iostream>
using namespace std;
int main(){
    
    for (int i=0;i<26;i++){
    char value='A'+i;
    cout<<value;
    }
    cout<<endl;
    for(char j='Z';j>='A';j--){
        cout<<j;
    }
}