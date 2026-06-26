#include<iostream>
#include<string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    if (name.empty()) {
        cout << "Name field cannot be empty.\n";
        return 1;
    }

    if (age <= 0) {
        cout << "Invalid age entry.\n";
        return 1;
    }

    // Checking voting threshold criteria
    cout << "\n--- Voting Eligibility Status ---\n";
    if (age >= 18) {
        cout << "Hello " << name << ", you are eligible to cast your vote.\n";
    }
    else {
        cout << "Hello " << name << ", you are not eligible to vote yet. You need to wait " << (18 - age) << " more year(s).\n";
    }

    return 0;
}