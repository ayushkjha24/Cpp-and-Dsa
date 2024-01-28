#include<iostream>
using namespace std;

class human
{
    protected:
    string name;
    int age;

    public:
    human(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    ~human()
    {
        cout<<"Hello animals\n";
    }
    void work()
    {
        cout<<"I'm working \n";
    }
};
class Student: public human
{
    int roll_number,fees;

    public:
    
    Student(string name,int age,int roll_number,int fees):human(name,age)
    {
        
        this->roll_number=roll_number;
        this->fees=fees;
        
    }
    
    ~Student()
    {
        cout<<"Hello inteligent\n";
    }
    void display()
    {
    cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }
};

int main()
{
    Student A1("Ayush",20,51,2000);
    //A1.work();
    A1.display();    
    //Student A2;
}