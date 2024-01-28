#include<iostream>
using namespace std;

bool Search(int arr[],int n){
for(int i=0;i<7;i++){
    if(arr[i]==n)
    return 1;
}
return 0;

}
int main(){
    int n;
    int arr[7]={1,4,5,2,8,6,9};
    cin>>n;
    bool ans=Search(arr,n);
    if(ans){
        cout<<"Found";
    }
    else
    cout<<"Not found";
return 0;

}