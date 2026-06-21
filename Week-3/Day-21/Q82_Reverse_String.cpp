#include<iostream>
#include<string>
using namespace std;

void reverseString(string s) {
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }

    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << "Reversed string is: " << s << "\n";
}

int main() {
    string s;
    cout << "Enter a string to reverse: ";
    getline(cin, s);

    if (s.empty()) {
        cout << "String cannot be empty\n";
        return 1;
    }

    reverseString(s);
    return 0;
}