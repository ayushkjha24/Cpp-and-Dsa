#include<iostream>
using namespace std;

int main()
{
    try{
        int *p=new int[10000000000];
        cout<<"Memory allocation is successfull\n";
        delete []p;
    }
    catch(const exception &e)
    {
        cout<<"Exception Occured due to line 9 :" <<e.what()<<endl;
    }
}