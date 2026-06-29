#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int activeIds[MAX];
    string namesRoster[MAX];
    double trackSalaries[MAX];
    int count;

    cout << "Enter capacity records limit: ";
    cin >> count;

    if (count > MAX || count < 1) {
        cout << "Database allocation boundary validation error.\n";
        return 1;
    }

    for (int i = 0; i < count; i++) {
        cout << "Enter Employee Corporate ID " << (i + 1) << ": ";
        cin >> activeIds[i];
        cin.ignore();
        cout << "Enter Registered Full Name: ";
        getline(cin, namesRoster[i]);
        cout << "Enter Configured Gross Base Salary: Rs. ";
        cin >> trackSalaries[i];
    }

    cout << "\n--- Active Enterprise Personnel Directory ---\n";
    for (int i = 0; i < count; i++) {
        cout << "Emp ID Reference: " << activeIds[i] << " | Operator Label: " << namesRoster[i] 
             << " | Net Compensation Base: Rs. " << trackSalaries[i] << "\n";
    }

    return 0;
}