#include<iostream>
using namespace std;

class Vector{
  public:
    int size;
    int capacity;
    int *arr;
    Vector()
    {
      size=0;
      capacity=1;
      arr=new int[1];
    }
    void add(int ele){
      if(size==capacity){
        capacity*=2;
        int * arr2 = new int[capacity];
        for (int i = 0; i < size; i++)
        {
          arr2[i]=arr[i];
        }
        arr=arr2;      
      }
      arr[size++]=ele;
    }
    void print()
    {
      for (int i = 0; i < size; i++)
      {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    int get(int index)
    {
      if(size==0)
      {
        cout<<"Array is empty"<<endl;
        return -1;
      }
      if(index>=size || index<0)
      {
        cout<<"Invalid Index\n";
        return -1;
      }
      return arr[index];
    }
    void remove(){
      if(size==0)
      cout<<"Array is empty"<<endl;
      size--;
    }
};

int main()
{
  Vector v;
  cout<<v.size<<" "<<v.capacity<<endl;
  v.add(10);
  cout<<v.size<<" "<<v.capacity<<endl;
  v.print();
  v.add(15);
  cout<<v.size<<" "<<v.capacity<<endl;
  v.print();
  v.add(30);
  cout<<v.size<<" "<<v.capacity<<endl;
  v.print();
  return 0;
}