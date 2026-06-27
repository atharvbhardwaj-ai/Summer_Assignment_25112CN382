#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    int n;
    string studentNames[MAX];
    int sub1Marks[MAX];
    int sub2Marks[MAX];
    int sub3Marks[MAX];
    double percentages[MAX];

    cout << "Enter number of student marksheets to generate ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter Student Name " << (i + 1) << " ";
        getline(cin, studentNames[i]);

        cout << "Enter Marks for Subject 1 (out of 100) ";
        cin >> sub1Marks[i];

        cout << "Enter Marks for Subject 2 (out of 100) ";
        cin >> sub2Marks[i];

        cout << "Enter Marks for Subject 3 (out of 100) ";
        cin >> sub3Marks[i];

        // Compute current metrics cleanly
        int total = sub1Marks[i] + sub2Marks[i] + sub3Marks[i];
        percentages[i] = (total / 300.0) * 100.0;
    }

    cout << "\n--- Generated Academic Marksheets ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Student: " << studentNames[i] 
             << " | Sub1: " << sub1Marks[i] 
             << " | Sub2: " << sub2Marks[i] 
             << " | Sub3: " << sub3Marks[i] 
             << " | Percentage: " << percentages[i] << "%" << endl;
    }

    return 0;
}