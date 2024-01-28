//Print the address of the first index of the char array in c++
/*
#include<iostream>
using namespace std;


int main()
{
    char name[]="Ayush";
    char *p=&name[0];
    cout<<p;//I'm unable to print the address of first index


}
*/
#include <iostream>
using namespace std;

int main() {
    char arr[] = "Hello";
    cout << "Address of the first index of the char array: " << static_cast<void*>(&arr[0]) << endl;
    return 0;
}
