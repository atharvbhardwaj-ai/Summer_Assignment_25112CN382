#include<iostream>
#include<string>
using namespace std;

char repeatingCharacter(const string &s) {
    int freq[256] = {0};

    for (int i = 0; s[i] != '\0'; i ++) {
        char ch = s[i];
        freq[ch] ++;
        if (freq[ch] > 1) {
            return ch;
        }
    }

    return '\0';
}

int main() {
    string str;

    cout << "Enter string ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input string cannot be empty";
        return 1;
    }

    char repeat = repeatingCharacter(str);
    if (repeat != '\0') {
        cout << "The first repeating character is " << repeat;
    }
    else {
        cout << "All characters are unique";
    }

    return 0;
}