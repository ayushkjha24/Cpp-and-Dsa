#include<iostream>
using namespace std;
int main(){
    int first=0,second=1,n;
    cin>>n;
    int nextTerm=first+second;
    for (int i=3;i<n;i++){
        first=second;
        second=nextTerm;
        nextTerm=first+second;
    }
    cout<<nextTerm;
}