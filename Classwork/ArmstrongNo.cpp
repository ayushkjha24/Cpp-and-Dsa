#include<iostream>
#include<math.h>
using namespace std;

bool isArmstrongNO(int n,int digit){
int ans=0,num=n,rem;
while(num){
    rem = num%10;
    num/=10;
    ans=ans+pow(rem,digit);
}
cout<<ans;
if(n==ans)
    return true;
else
return false;
}
int countDigit(int n){
int count = 0;
while(n){
    count++;
    n/=10;
}
return count;
}

int main(){
    int n;
    cin>>n;
    int digit = countDigit(n);
    cout<<digit<<endl;
    cout<<isArmstrongNO(n,digit);

}
