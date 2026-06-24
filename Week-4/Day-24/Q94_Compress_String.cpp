#include<iostream>
#include<string>
using namespace std;

string compressString(const string &s) {
    int len = s.length();
    string result = "";

    int i = 0;
    while (i < len) {
        int count = 0;
        char ch = s[i];
        
        while (i < len && ch == s[i]) {
            i ++;
            count ++;
        }

        result += ch;
        result += to_string(count);
    }

    if (result.length() < len) {
        return result;
    }
    
    return s;
}

int main() {
    string str;

    cout << "Enter string ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input string cannot be empty";
        return 1;
    }

    cout << "The compressed String is " << compressString(str);

    return 0;
}