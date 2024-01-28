#include<iostream>
using namespace std;


class Engineer {
    public:
    string specilization;

    void work()
    {
        cout<<"I have specialization in "<<specilization<<endl;
    }
};

class Youtuber
{
    public:
    int subscribers;

    void contentcreator()
    {
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
}; 

class CodeTeacher:public Engineer,public Youtuber
{
    public:
    string name;
    CodeTeacher(string name,string specilization,int subscribers)
    {
        this->name=name;
        this->specilization=specilization;
        this->subscribers=subscribers;
    }   
    void showcase()
    {
        cout<<"My name is "<<name<<endl;
        work();
        contentcreator();
    } 
};
int main()
{
    CodeTeacher A1("Ayush","CSE",5000);
    A1.showcase();
}