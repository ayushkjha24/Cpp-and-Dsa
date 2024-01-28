#include<iostream>
using namespace std;

//class definition
class student
{
    //Access modifier
    private:
    string name;
    int age,roll_number;
    string grade;
    public:
    //setter
    void setname(string s)
    {
        name=s;
    }
    void setage(int s)
    {
        age=s;
    }
    void setgrade(string s)
    {
        grade=s;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }
    string getgrade()
    {
        return grade;
    }
};

int main()
{
    student s1;//object declaration
    s1.setname("Ayush");
    s1.setage(20);
    s1.setgrade("A+");
    s1.getname();
    s1.getage();
    cout<<s1.getgrade()<<endl;
}