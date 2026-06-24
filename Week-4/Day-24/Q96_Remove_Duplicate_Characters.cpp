#include<iostream>
#include<string>
using namespace std;

string removeDuplicateCharacters (const string &s) {
    string result = "";
    int len = s.length();
    int freq[256] = {0};

    for (int i = 0; i < len; i ++) {
        char ch = s[i];
        freq[ch] ++;
    }

    for (int i = 0; i < len; i ++) {
        char ch = s[i];
        if (freq[ch] == 1) {
            result += ch;
        }
    }

    return result;
}

int main() {
    string str;

    cout << "Enter string ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input string cannot be empty";
        return 1;
    }

    cout << "After removing Duplicate Characters the string is: " << removeDuplicateCharacters(str);

    return 0;
}