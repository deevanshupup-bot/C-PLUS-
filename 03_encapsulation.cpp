//encapsulation is wrapping up of data and member function in a single unit called class.

#include<iostream>
using namespace std;

class Account {
private:
    double balance;   // private data

public:
    // Setter (deposit money)
    void deposit(double amount) {
        balance = amount;
    }

    // Getter (get balance)
    double getBalance() {
        return balance;
    }
};

int main() {
    Account a1;

    a1.deposit(5000);   // setter function

    cout << "Account Balance: " << a1.getBalance() << endl;  // getter function

    return 0;
}