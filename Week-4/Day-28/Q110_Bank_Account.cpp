#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int n;
    int accountNumbers[MAX];
    string customerNames[MAX];
    double accountBalances[MAX];

    cout << "Enter number of bank accounts to initialize ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter Account Number " << (i + 1) << " ";
        cin >> accountNumbers[i];
        cin.ignore();

        cout << "Enter Customer Name " << (i + 1) << " ";
        getline(cin, customerNames[i]);

        cout << "Enter Initial Balance for " << customerNames[i] << " ";
        cin >> accountBalances[i];
    }

    cout << "\n--- Bank Core Account Ledger ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Acc No: " << accountNumbers[i] << " | Customer: " << customerNames[i] 
             << " | Balance: Rs. " << accountBalances[i] << endl;
    }

    return 0;
}