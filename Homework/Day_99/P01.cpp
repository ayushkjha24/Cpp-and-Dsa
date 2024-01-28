#include<iostream>
using namespace std;

class customer{
string name;
int accountNumber;
int accountBalance;
bool isActive;
string target;
public:

customer(string customerName, int customerAccountNumber, double initialBalance)
{
name = customerName;
accountNumber = customerAccountNumber;
accountBalance = initialBalance;
isActive = true;
}

void deposit(int amount)
{
    accountBalance+=amount;
}
void withdraw(int amount)
{
    accountBalance-=amount;
}
void transfer(double amount, customer& targetAccount) {
if (isActive && amount > 0 && accountBalance >= amount) {
accountBalance -= amount;
targetAccount.deposit(amount);
cout << "Transferred $" << amount << " from account " << accountNumber
<< " to account " << targetAccount.getAccountNumber() << endl;
} else {
cout << "Invalid transfer or insufficient funds" << endl;
}
}
void printDetails()
{
    cout<<name<<" "<<accountNumber<<" "<<accountBalance<<endl;
}
int getAccountNumber() const{
    return accountNumber;
}
};

int main()
{
    customer customer1("John Doe", 12345, 1000.0);
    customer customer2("Jane Doe", 67890, 1500.0);
    customer1.printDetails();
    cout << endl;
customer1.deposit(500.0);
customer1.printDetails();
cout << endl;
customer1.withdraw(200.0);
customer1.printDetails();
cout << endl;
customer1.transfer(300.0, customer2);
customer1.printDetails();
customer2.printDetails();
}