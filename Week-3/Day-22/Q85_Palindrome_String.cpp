#include<iostream>
#include<string>
using namespace std;

bool palindromeString(const string &s) {
    int low = 0, high = s.length() - 1;

    while (low < high) {
        if (s[low] != s[high]) {
            return false;
        }
        low ++;
        high --;
    }

    return true;
}

int main() {
    string str;
    
    cout << "Enter String ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input String cannot be Empty";
        return 1;
    }

    if (palindromeString(str)) {
        cout << "The entered string is Palindrome";
    }
    else {
        cout << "The entered string is Not Palindrome";
    }

    return 0;
}