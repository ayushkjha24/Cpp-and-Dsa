#include<iostream>
using namespace std;

int main()
{
    /*char name[10];
    cin>>name;
    name[2]='\0';
    cout<<name<<endl;
    */

    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    // string s1="Ayus",s2="Jha";
    // s1.push_back('h');
    // string s3=s1.append(s2);
    // cout<<s3<<endl;
    
    // string s="India is the \"Great\" country ";

    string s="Ayush";
    // int start = 0,end=s.size()-1;
    // while(start<end)
    // {
    //     swap(s[start],s[end]);
    //     start++,end--;
    // }
    // cout<<s<<endl;

    int size=0;
    while(s[size]!='\0'){
        size++;
    }
    cout<<size<<endl;

    string s2;
    cin>>s2;
    int start=0,end=s2.size()-1;
    while(start<end){
        if(s2[start]!=s2[end]){
            cout<<"NOT a palindrome"<<endl;
            return 0;
        }
        start++,end--;
    }
    cout<<"YES it is a palindrome"<<endl;
    return 0;
}