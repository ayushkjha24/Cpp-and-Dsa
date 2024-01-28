#include<iostream>
using namespace std;

class car{
    private:

    string model;
    int year;
    double fuelLevel;
    int speed;
    bool isRunning;

    public:
    car(string model,int year,double fuelLevel,int speed)
    {
        this->model=model;
        this->year=year;
        this->fuelLevel=fuelLevel;
        this->speed=speed;
        isRunning=0;
    }
    void startEngine()
    {
        isRunning=1;
        cout<<"Engine started\n";
    }
    void stopEngine()
    {
        isRunning=0;
        cout<<"Engine stopped\n";
    }
    void accelerate(int amount )
    {
        isRunning=1;
        speed+=amount;
    }
    void brake(int amount )
    {
        if(amount>speed)
        speed=0;
        else
        speed-=amount;
    }
    void refuel(int amount)
    {
        fuelLevel+=amount;
    }
    void printStatus()
    {
        cout<<model<<" "<<speed<<" "<<fuelLevel<<" "<<isRunning<<endl;
    }
};

int main()
{
    car car1("Punch",2015,50,60);
    car1.printStatus();
    car1.startEngine();
    car1.accelerate(40);
    car1.printStatus();
}