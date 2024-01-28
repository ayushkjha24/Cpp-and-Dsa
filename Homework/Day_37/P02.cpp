//How to find the number of Occurance of an element in a vector.
// You need to use STL here

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> vec = {3,2,2,6,2,6,7};
	int target=2;
	int count= std::count(vec.begin(),vec.end(),target);
	cout<<"No. of count of "<<target<<" : "<<count;
	return 0;
}