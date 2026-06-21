#include<iostream>
#include<string>
using namespace std;

void convertToUppercase(string s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32; 
        }
    }
    cout << "Uppercase string: " << s << "\n";
}

int main() {
    string s;
    cout << "Enter a lowercase string: ";
    getline(cin, s);

    if (s.empty()) {
        cout << "String cannot be empty\n";
        return 1;
    }

    convertToUppercase(s);
    return 0;
}