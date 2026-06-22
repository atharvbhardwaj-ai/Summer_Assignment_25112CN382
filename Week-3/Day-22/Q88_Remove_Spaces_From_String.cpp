#include<iostream>
#include<string>
using namespace std;

int removeSpaces(string &s) {
    int j = 0;
    
    for (int i = 0; s[i] != '\0'; i ++) {
        if (s[i] != ' ') {
            s[j] = s[i];
            j ++;
        }
    }
    s.resize(j);
    return j;
}

int main() {
    string str;

    cout << "Enter string ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input String cannot be empty";
        return 1;
    }

    int len = removeSpaces(str);

    cout << "Updated String is -\n" << str;

    return 0;
}