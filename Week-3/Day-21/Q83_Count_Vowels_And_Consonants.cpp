#include<iostream>
#include<string>
using namespace std;

void countVowelsAndConsonants(string s) {
    int vowels = 0, consonants = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << "\n";
    cout << "Consonants: " << consonants << "\n";
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (s.empty()) {
        cout << "String cannot be empty\n";
        return 1;
    }

    countVowelsAndConsonants(s);
    return 0;
}