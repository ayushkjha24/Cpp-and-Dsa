#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

int main()
{
    Node *Head;
    Head = new Node(4);
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;

    int arr[]={2,4,6,8,10};
    //Insert the node at beginning

    //Linked list doesn't exist
    if(Head==NULL)
    {
        Head = new Node(5);
    }
    //Linked list exists 
    else
    {
        Node *temp;
        temp=new Node(5);
        temp->next=Head;
        Head = temp;
    }
}