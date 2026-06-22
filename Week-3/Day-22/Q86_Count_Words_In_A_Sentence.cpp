#include<iostream>
#include<string>
using namespace std;

int countWordsInSentence (const string &s) {
    int count = 0;
    bool in_word = false;

    // State Machine Pattern
    for (int i = 0; s[i] != '\0'; i ++) {
        if (s[i] == ' ') {
            in_word = false; // Since we hit a space, the word has ended
        }
        else if (!in_word) {
            count ++;
            in_word = true;
        }
    }

    return count;
}

int main() {
    string str;

    cout << "Enter String ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input String cannot be empty.";
        return 1;
    }

    cout << "The number of words in the given sentence are " << countWordsInSentence(str);

    return 0;
}