#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    public:
    void introduce()
    {
        cout<<"Hello my name is "<<name<<endl;
    }
};
class Employee: public Person
{
    protected: 
    int salary;
    public:
    void monthly_salary()
    {
        cout<<"My monthly salary is "<<salary<<endl;
    }
};
class Manager: public Employee
{
    public:
    string department;
    Manager(string name,int salary,string deparment)
    {
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
    void work()
    {
        cout<<" I'm leading the department "<<department <<endl;
    }
};

int main()
{
    Manager A1("Ayush", 2000009, "finance");
    A1.introduce();
}