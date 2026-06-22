#include<iostream>
#include<string>
using namespace std;

void countVowelsAndConsonants (const string &s){ // const used to avoid accidentally editing the original characters
    int vowels = 0, consonants = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } 
            else {
                consonants++;
            }
        }
    }

    cout << "The number of vowels in " << s << " is " << vowels << "\n";
    cout << "The number of consonants in " << s << " is " << consonants;
}

int main(){
    string str;
    
    cout << "Enter the String ";
    getline (cin, str);

    if (str.empty()) {
        cout << "Input String cannot be empty!";
        return 1;
    }

    countVowelsAndConsonants(str);

    return 0;
}