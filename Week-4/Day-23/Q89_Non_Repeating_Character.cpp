#include<iostream>
#include <string>
using namespace std;

char nonRepeatingCharacter(const string &s) {
    int freq[256] = {0};

    for (int i = 0; s[i] != '\0'; i ++) {
        freq[s[i]] ++;
    }

    for (int i = 0; s[i] != '\0'; i ++) {
        if (freq[s[i]] == 1) {
            return s[i];
        }
    }

    return '\0';
}

int main() {
    string str;

    cout << "Enter string ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input String cannot be empty";
        return 1;
    }

    char first_unique = nonRepeatingCharacter(str);

    if (first_unique != '\0') {
        cout << "First Non Repeating Character is " << first_unique; 
    }

    else {
        cout << "All characters in the string repeat atleast once";
    }

    return 0;
}