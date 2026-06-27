#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int n;
    int rollNumbers[MAX];
    string names[MAX];
    double gpas[MAX];

    cout << "Enter number of students to record ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size entry.";
        return 1;
    }

    // Input loop matching your array entry conventions
    for (int i = 0; i < n; i++) {
        cout << "Enter Roll Number for student " << (i + 1) << " ";
        cin >> rollNumbers[i];
        cin.ignore(); // Clean buffer before tracking text string

        cout << "Enter Name for student " << (i + 1) << " ";
        getline(cin, names[i]);

        cout << "Enter GPA for student " << (i + 1) << " ";
        cin >> gpas[i];
    }

    // Display system record matching your standard layout paths
    cout << "\n--- Student Record Database ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << rollNumbers[i] << " | Name: " << names[i] << " | GPA: " << gpas[i] << endl;
    }

    return 0;
}