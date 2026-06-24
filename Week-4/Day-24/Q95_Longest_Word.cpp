#include<iostream>
#include<string>
using namespace std;

string longestWord (const string &s) {
    int len = s.length();
    string current_word = "";
    string max_word = "";

    for (int i = 0; i <= len; i ++) { // Loop runs till (i <= len) to check for final word as well
        char ch = s[i];
        if (ch == ' ' || ch == '\0') {
            if (max_word.length() < current_word.length()) {
                max_word = current_word;
            }
            current_word = "";
        }
        else {
            current_word += ch;
        }
    }

    return max_word;
}

int main() {
    string str;

    cout << "Enter string ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input string cannot be empty";
        return 1;
    }

    cout << "The longest word is " << longestWord(str);

    return 0;
}