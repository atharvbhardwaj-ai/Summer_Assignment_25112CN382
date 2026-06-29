#include<iostream>
#include<string>
using namespace std;

int main() {
    string sourceStr;
    int choice;

    cout << "Enter primary baseline string: ";
    getline(cin, sourceStr);

    while (true) {
        cout << "\n--- Menu String System ---\n";
        cout << "1. Display String Length\n";
        cout << "2. Concatenate a New String\n";
        cout << "3. Reset Source String\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4) {
            cout << "Closing text system.\n";
            break;
        }
        else if (choice == 1) {
            cout << "String Length metric: " << sourceStr.length() << " characters.\n";
        }
        else if (choice == 2) {
            string appendStr;
            cin.ignore();
            cout << "Enter string fragment to append: ";
            getline(cin, appendStr);
            sourceStr = sourceStr + appendStr;
            cout << "Concatenated result payload: " << sourceStr << "\n";
        }
        else if (choice == 3) {
            cin.ignore();
            cout << "Enter new replacement baseline string: ";
            getline(cin, sourceStr);
            cout << "String update verified successfully.\n";
        }
        else {
            cout << "Invalid text action selection.\n";
        }
    }
    return 0;
}