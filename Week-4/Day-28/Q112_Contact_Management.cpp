#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int n;
    string contactNames[MAX];
    string phoneNumbers[MAX];

    cout << "Enter number of contacts to save ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter Contact Name " << (i + 1) << " ";
        getline(cin, contactNames[i]);

        cout << "Enter Phone Number for " << contactNames[i] << " ";
        getline(cin, phoneNumbers[i]);
    }

    cout << "\n--- Contact Management Directory ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << contactNames[i] << " | Phone: " << phoneNumbers[i] << endl;
    }

    return 0;
}