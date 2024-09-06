#include<iostream>
using namespace std;

template <typename T> T sum(T x,T y)
{
  return x+y;
}
template <typename T> T myMax(T x,T y)
{
  return (x>y)?x:y;
}
int main()
{
  cout<<sum(3,4)<<endl;
  cout<<sum(3.0,4.0)<<endl;
  cout<<myMax(28,86)<<endl;
}