#include<iostream>
using namespace std;

int main() {
    double balance = 5000.0; // Initial simulated balance
    int choice;
    double amount;

    while (true) {
        cout << "\n--- ATM Simulation Dashboard ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your current account balance is: Rs. " << balance << "\n";
        }
        else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid deposit amount.\n";
            } else {
                balance += amount;
                cout << "Successfully deposited Rs. " << amount << ". Updated Balance: Rs. " << balance << "\n";
            }
        }
        else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid withdrawal amount.\n";
            } else if (amount > balance) {
                cout << "Insufficient transaction funds available.\n";
            } else {
                balance -= amount;
                cout << "Successfully withdrew Rs. " << amount << ". Remaining Balance: Rs. " << balance << "\n";
            }
        }
        else if (choice == 4) {
            cout << "Thank you for using our ATM service. Transaction closed.\n";
            break;
        }
        else {
            cout << "Invalid operational selection. Try again.\n";
        }
    }

    return 0;
}