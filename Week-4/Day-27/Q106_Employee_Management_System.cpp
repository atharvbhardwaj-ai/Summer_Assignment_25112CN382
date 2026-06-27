#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int n;
    int empIds[MAX];
    string empNames[MAX];
    string departments[MAX];

    cout << "Enter number of employees to add ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter Employee ID " << (i + 1) << " ";
        cin >> empIds[i];
        cin.ignore();

        cout << "Enter Employee Name " << (i + 1) << " ";
        getline(cin, empNames[i]);

        cout << "Enter Department " << (i + 1) << " ";
        getline(cin, departments[i]);
    }

    cout << "\n--- Employee Roster Directory ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << empIds[i] << " | Name: " << empNames[i] << " | Department: " << departments[i] << endl;
    }

    return 0;
}