#include<iostream>
using namespace std;

int main(){
    int length;
    cout << "Enter length of a side of a square ";
    cin >> length;

    int i,j;
    for (i = 1; i <= length; i++) {
        for (j = 1; j <= length; j++) {
            if (i == 1 || i == length || j == 1 || j == length) {
                cout << "*";
            } 
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}