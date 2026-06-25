#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of names ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Number of names must be greater than 0";
        return 1;
    }

    string names[100];
    cout << "Enter names -\n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Alphabetically sorted names are -\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << "\n";
    }

    return 0;
}