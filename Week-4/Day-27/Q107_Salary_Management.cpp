#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int n;
    string names[MAX];
    double baseSalaries[MAX];
    double allowances[MAX];
    double totalSalaries[MAX];

    cout << "Enter number of employee salary profiles ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter Employee Name " << (i + 1) << " ";
        getline(cin, names[i]);

        cout << "Enter Base Salary for " << names[i] << " ";
        cin >> baseSalaries[i];

        cout << "Enter Allowances for " << names[i] << " ";
        cin >> allowances[i];

        // Calculating total payout field manually
        totalSalaries[i] = baseSalaries[i] + allowances[i];
    }

    cout << "\n--- Salary Management Payroll ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << names[i] << " | Base: Rs. " << baseSalaries[i] 
             << " | Allowances: Rs. " << allowances[i] << " | Net Payout: Rs. " << totalSalaries[i] << endl;
    }

    return 0;
}