#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of words ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of words must be greater than 0";
        return 1;
    }

    string words[100];
    cout << "Enter words -\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j].length() > words[j + 1].length()) {
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    cout << "Words sorted by length are -\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << " (Length: " << words[i].length() << ")\n";
    }

    return 0;
}