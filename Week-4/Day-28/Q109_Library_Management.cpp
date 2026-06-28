#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int n;
    int bookIds[MAX];
    string titles[MAX];
    bool isIssued[MAX];

    cout << "Enter number of books to add to library ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter Book ID " << (i + 1) << " ";
        cin >> bookIds[i];
        cin.ignore(); // Clear buffer before reading string text

        cout << "Enter Book Title " << (i + 1) << " ";
        getline(cin, titles[i]);

        // Defaulting all new system entries to available (not issued)
        isIssued[i] = false;
    }

    cout << "\n--- Current Library Inventory System ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << bookIds[i] << " | Title: " << titles[i] 
             << " | Status: " << (isIssued[i] ? "Issued" : "Available") << endl;
    }

    return 0;
}