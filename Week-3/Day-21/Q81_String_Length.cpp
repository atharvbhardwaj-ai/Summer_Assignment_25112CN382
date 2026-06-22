#include<iostream>
#include<string>
using namespace std;

int findStringLength (string s){
    int i = 0;

    while (s[i] != '\0'){
        i ++;
    }

    return i;
}

int main(){
    string str;
    
    cout << "Enter the string ";
    getline(cin, str);

    if (str.empty()){
        cout << "Input String cannot be empty";
        return 1;
    }

    int len = findStringLength(str);

    cout << "The String Length is " << len;

    return 0;
}