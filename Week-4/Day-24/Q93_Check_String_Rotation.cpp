#include<iostream>
#include<string>
using namespace std;

bool checkStringRotation (const string &s1, const string &s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    string temp = s1 + s1;
    if (temp.find(s2) != string::npos) { // npos represents no position '-1'
        return true;
    }

    return false;
}

int main() {
    string str1, str2;

    cout << "Enter Orignal String ";
    getline(cin, str1);

    cout << "Enter String to be checked for rotation ";
    getline(cin, str2);

    if (checkStringRotation(str1, str2)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}