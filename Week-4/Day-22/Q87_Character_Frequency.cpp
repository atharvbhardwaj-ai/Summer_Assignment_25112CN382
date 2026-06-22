#include<iostream>
#include<string>
using namespace std;

void characterFrequency(const string &s) {
    int freq[256] = {0}; // Since there are total 256 ASCII and extended ASCII characters

    for (int i = 0; s[i] != '\0'; i ++) {
        freq[s[i]] ++;
    }

    for (int i = 0; s[i] != '\0'; i ++) {
        if (freq[s[i]]) {
            cout << s[i] << ": " << freq[s[i]] << "\n";
            freq[s[i]] = 0;
        }
    }
}

int main() {
    string str;
    
    cout << "Enter string ";
    getline (cin, str);

    if (str.empty()) {
        cout << "Input String cannot be empty.";
        return 1;
    }

    characterFrequency(str);

    return 0;
}