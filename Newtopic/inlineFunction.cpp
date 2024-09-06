/*C++ provides inline functions to reduce the function call overhead.
An inline function is a function that is expanded in line when it is called.
When the inline function is called whole code of the inline function gets 
inserted or substituted at the point of the inline function call. 
This substitution is performed by the C++ compiler at compile time.
An inline function may increase efficiency if it is small*/

//https://www.geeksforgeeks.org/inline-functions-cpp/?ref=lbp

#include <iostream>
using namespace std;
inline int cube(int s) { return s * s * s; }
int main()
{
	cout << "The cube of 3 is: " << cube(3) << "\n";
	return 0;
}



// C++ Program to demonstrate inline functions and classes
#include <iostream>

using namespace std;

class operation {
	int a, b, add, sub, mul;
	float div;

public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};
inline void operation ::get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}

inline void operation ::sum()
{
	add = a + b;
	cout << "Addition of two numbers: " << a + b << "\n";
}

inline void operation ::difference()
{
	sub = a - b;
	cout << "Difference of two numbers: " << a - b << "\n";
}

inline void operation ::product()
{
	mul = a * b;
	cout << "Product of two numbers: " << a * b << "\n";
}

inline void operation ::division()
{
	div = a / b;
	cout << "Division of two numbers: " << a / b << "\n";
}

int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}