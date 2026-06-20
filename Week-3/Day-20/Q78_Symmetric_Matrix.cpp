#include<iostream>
using namespace std;

bool symmetricMatrix(int arr[][50], int r, int c){
    if (r != c){
        return false;
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < i; j++) { // Only checks when j is less than i
            if (arr[i][j] != arr[j][i]) {
                return false; // Found a mismatch, stop immediately
            }
        }
    }

    return true; // If no mismatch was found, it is symmetric
}

int main(){
    int r, c;
    
    cout << "Enter no of rows & columns of Matrix ";
    cin >> r >> c;

    // Boundary Guard Clause
    if (r < 1 || r > 50 || c < 1 || c >50) {
        cout << "Number of Rows or Columns can't be greater than 50 or smaller than 1";
        return 1; // Ending Program with '1' for unsucessful Signal
    }

    if (r != c){
        cout << "A Rectangular Matrix can never be Symmetric.";
        return 1; // Returning '1' for Unsuccessful Signal
    }

    int M[50][50];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j ++) {
            cout << "M[" << i << "]" << "[" << j << "] = ";
            cin >> M[i][j];
        }
    }

    if (symmetricMatrix(M, r, c)){
        cout << "The entered Matrix is Symmetric";
    }
    else {
        cout << "The entered Matrix is not Symmetric";
    }

    return 0;
}