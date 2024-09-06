#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int arr[3][3]={1,2,3,3,2,1,1,3,2};
  bool flag=false;
  for(int i=0;i<3;i++)
  {
    vector<bool>v(3,false);
    for(int j=0;j<3;j++)
    {
      int x=arr[i][j];
      if(v[x-1]==true || x<1 || x>3)
      {
        flag=true;
        break;
      }
      v[x-1]=true;
    }
  }
  if(flag)
  cout<<"False\n";
  else
  cout<<"True\n";
  return 0;
}