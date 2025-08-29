#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string onwerName;
    int accoutNumber;
    double balance;

public:
    // TODO: Default constructor
    BankAccount(){
        onwerName = "Unknown";
        accoutNumber = 0;
        balance = 0.0;
    }

    // TODO: Parameterized constructor
    BankAccount(string name, int accNum, double bal){
        onwerName = name;
        accoutNumber = accNum;
        balance = bal;
    }

    // TODO: deposit function
    void deposit(double amount){
        if (amount > 0){
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // TODO: withdraw function
    void withdraw(double amount){
        if (amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Withdraw amount must be positive!" << endl;
        }
    }

    // TODO: displayAccount function
    void displayAccount() const{
        cout << "Account Owner: " << onwerName << endl;
        cout << "Account Number: " << accoutNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create account with default constructor
    BankAccount acc1;

    // Create account with parameterized constructor
    BankAccount acc2("Sonika", 2025001, 150.0);

    // Deposit and withdraw
    acc1.deposit(100);
    acc1.withdraw(30);
    acc2.deposit(50);
    acc2.withdraw(200); // should fail if balance is insufficient

    // Display both accounts
    acc1.deposit(100);
    acc1.withdraw(30);
    acc2.deposit(50);
    acc2.withdraw(200); // should fail if balance is insufficient
 
    return 0;
}
