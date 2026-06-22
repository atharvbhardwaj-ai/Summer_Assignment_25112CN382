#include<iostream>
#include<string>
using namespace std;

void reverseString (string &s){ // Pass by Reference
    int len = s.length();
    int low = 0, high = len - 1;
    while (low < high) {
        swap(s[low], s[high]);
        low ++;
        high --;
    }
}

int main(){
    string str;
    
    cout << "Enter String ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Input String cannot be empty.";
        return 1;
    }

    reverseString(str);

    cout << "The Reversed String is " << str;
    
    return 0;
}