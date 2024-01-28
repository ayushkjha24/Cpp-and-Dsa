#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //create vector
    vector<int>v;
    vector<int>v1(5,1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(2);
    v.push_back(9);

    //size and capacity
    cout<<"Size of v : "<<v.size()<<endl;
    cout<<"Capacity of v : "<<v.capacity()<<endl;
    cout<<"Size of v : "<<v1.size()<<endl;
    cout<<"Capacity of v : "<<v1.capacity()<<endl;
    //update value
    v[1]=5;
    v1.push_back(5);
    cout<<"Size of v : "<<v1.size()<<endl;
    cout<<"Capacity of v : "<<v1.capacity()<<endl;
    vector<int>v3={2,5,6,2,8};

    //delete value from vector
    v1.pop_back();
}