#include<iostream>
#include<string>
using namespace std;

void findStringLength(string s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    cout << "The length of the string is: " << length << "\n";
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (s.empty()) {
        cout << "String cannot be empty\n";
        return 1;
    }

    findStringLength(s);
    return 0;
}