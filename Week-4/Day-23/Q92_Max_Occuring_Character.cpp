#include<iostream>
#include<string>
using namespace std;

char maxOccuringCharacter (const string &s) {
    int freq[256] = {0};
    int max_count = 0;
    char max_character = ' ';

    for (int i = 0; s[i] != '\0'; i ++) {
        char ch = s[i];
        freq[ch] ++;
        if (freq[ch] > max_count) {
            max_count = freq[ch];
            max_character = ch;
        }
    }

    return max_character;
}

int main() {
    string str;

    cout << "Enter string ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input string cannot be empty";
        return 1;
    }

    cout << "The maximum occuring character is " << maxOccuringCharacter(str);

    return 0;
}