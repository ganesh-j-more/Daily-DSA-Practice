#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;  // hidden data

public:
    void deposit(int amount) {
        balance += amount;
    }

    int getBalance() {
        return balance;  // controlled access
    }
};

int main() {
    BankAccount acc;
    acc.deposit(100);
    cout << "Balance: " << acc.getBalance();
    return 0;
}
