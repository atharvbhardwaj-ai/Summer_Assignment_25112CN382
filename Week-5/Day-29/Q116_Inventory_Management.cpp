#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int itemIds[MAX];
    string itemNames[MAX];
    int itemStocks[MAX];
    int n;

    cout << "Enter item volume capacity to register: ";
    cin >> n;

    if (n > MAX || n < 1) {
        cout << "Invalid database configuration limits.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter Item ID " << (i + 1) << ": ";
        cin >> itemIds[i];
        cin.ignore();
        cout << "Enter Item Name " << (i + 1) << ": ";
        getline(cin, itemNames[i]);
        cout << "Enter Available Stock Quantity: ";
        cin >> itemStocks[i];
    }

    cout << "\n--- Final Registered Inventory Manifest ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Item Code: " << itemIds[i] << " | Label: " << itemNames[i] 
             << " | Inventory Stocks: " << itemStocks[i] << " units\n";
    }

    return 0;
}