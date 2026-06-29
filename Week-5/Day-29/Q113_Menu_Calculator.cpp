#include<iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    while (true) {
        cout << "\n--- Menu-Driven Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting calculator engine.\n";
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        if (choice == 1) {
            cout << "Result: " << (num1 + num2) << "\n";
        }
        else if (choice == 2) {
            cout << "Result: " << (num1 - num2) << "\n";
        }
        else if (choice == 3) {
            cout << "Result: " << (num1 * num2) << "\n";
        }
        else if (choice == 4) {
            if (num2 == 0) {
                cout << "Error: Division by zero is undefined.\n";
            } else {
                cout << "Result: " << (num1 / num2) << "\n";
            }
        }
        else {
            cout << "Invalid operation selection.\n";
        }
    }
    return 0;
}