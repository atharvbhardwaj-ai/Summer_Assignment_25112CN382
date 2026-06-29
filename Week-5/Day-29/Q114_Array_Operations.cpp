#include<iostream>
using namespace std;

const int MAX = 50;

int main() {
    int arr[MAX];
    int n = 0;
    int choice;

    cout << "Enter initial number of elements in array: ";
    cin >> n;

    if (n > MAX || n < 0) {
        cout << "Invalid configuration size.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    while (true) {
        cout << "\n--- Menu Array Operations ---\n";
        cout << "1. Display Array\n";
        cout << "2. Find Maximum Element\n";
        cout << "3. Calculate Sum of Elements\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4) {
            cout << "Exiting system.\n";
            break;
        }
        else if (choice == 1) {
            cout << "Current Array elements: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else if (choice == 2) {
            if (n == 0) {
                cout << "Array is completely empty.\n";
            } else {
                int maxVal = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maxVal) {
                        maxVal = arr[i];
                    }
                }
                cout << "Maximum Element: " << maxVal << "\n";
            }
        }
        else if (choice == 3) {
            int totalSum = 0;
            for (int i = 0; i < n; i++) {
                totalSum += arr[i];
            }
            cout << "Total Sum: " << totalSum << "\n";
        }
        else {
            cout << "Invalid operational parameters.\n";
        }
    }
    return 0;
}