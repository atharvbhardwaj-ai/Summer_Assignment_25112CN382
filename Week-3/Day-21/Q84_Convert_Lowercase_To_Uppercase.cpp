#include<iostream>
#include<string>
using namespace std;

void convertToUppercase(string &s) {
    for (int i = 0; s[i] != '\0'; i ++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
}

int main() {
    string str;
    cout << "Enter a lowercase string: ";
    getline(cin, str);

    if (str.empty()) {
        cout << "String cannot be empty";
        return 1;
    }

    convertToUppercase(str);

    cout << "Converted Lowercase to Uppercase : " << str;

    return 0;
}