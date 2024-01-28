#include<iostream>
using namespace std;

void lowerToUpper(string &str,int index)
{
    if(index==-1)
    return ;
    str[index]='A'+str[index]-'a';
    lowerToUpper(str,index-1);
}

int main()
{
    string str = "ayush";
    lowerToUpper(str,5);
    cout<<str<<endl;
    return 0;
}