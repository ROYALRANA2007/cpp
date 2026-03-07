#include<iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber,balance;
public:
void setAccount(int accNo, float bal)
    {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited: " << amount << endl;
    }
    void withdraw(float amount)
    {
        if (balance - amount >= 0)
        {
            balance = balance - amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance! Withdrawal not allowed." << endl;
        }
    }
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;

    b1.setAccount(101, 5000);

    b1.deposit(2000);
    b1.withdraw(3000);
    b1.withdraw(5000);  

    b1.display();

    return 0;
}
