#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    string studentNames[MAX];
    int marksArray[MAX];
    int n;

    cout << "Enter student registration registry volume: ";
    cin >> n;

    if (n > MAX || n < 1) {
        cout << "Over allocation boundary error.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter full name for candidate " << (i + 1) << ": ";
        getline(cin, studentNames[i]);
        cout << "Enter score evaluation threshold (0-100): ";
        cin >> marksArray[i];
    }

    cout << "\n--- Student Records Evaluation Summary ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Student Index: " << (i + 1) << " | Candidate Name: " << studentNames[i] 
             << " | Score: " << marksArray[i] << "/100\n";
    }

    return 0;
}