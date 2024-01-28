//Print the address of the char variable in c++

#include<iostream>
using namespace std;

int main ()
{
    char char1='a';
    char *ptr=&char1;
    cout<<static_cast<void*>(ptr)<<endl;

}

/*
In C++, the `static_cast` is a type of casting operator used for explicit type conversion. It is used to convert one data type into another within the boundaries of the C++ type system. The purpose of using `static_cast` includes:

1. **Type Safety:** It provides a compile-time check to ensure that the type conversion is valid. It helps catch potential errors at compile time rather than runtime.

2. **Clarity and Readability:** Using `static_cast` makes the type conversion explicit, making the code more readable and clearer for other developers to understand the intention of the conversion.

3. **Prevents Unintentional Type Conversions:** It helps prevent unintentional implicit type conversions, which can occur with other, less specific casting operators.

4. **Enum Class Conversions:** `static_cast` can be used to convert enum class types to integer types.

To summarize, `static_cast` is used in C++ to perform explicit type conversions with type safety, improved readability, and prevention of unintentional type conversions.  
*/