#include<iostream>
#include<string>
using namespace std;

bool anagramStrings(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    int freq[256] = {0};

    // We know the Strings are of the same length so their null character will be at same Index Position
    for (int i = 0; s1[i] != '\0'; i ++) {
        freq[s1[i]] ++;
        freq[s2[i]] --;
    } 

    for (int i = 0; i < 256; i ++) {
        if (freq[i] != 0){
            return false;
        }
    }

    return true;
}

int main() {
    string str1, str2;

    cout << "Enter first string ";
    getline(cin, str1);

    cout << "Enter second string ";
    getline(cin, str2);

    if (str1.empty() || str2.empty()) {
        cout << "Input string cannot be empty";
        return 1;
    }

    if (anagramStrings(str1, str2)) {
        cout << "The entered strings are Anagram";
    }
    else {
        cout << "The entered strings are Not Anagram";
    }

    return 0;
}