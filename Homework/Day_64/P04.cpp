#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr=&arr[0];
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<ptr+1<<endl;
    cout<<*ptr+1<<endl;
    return 0;
}