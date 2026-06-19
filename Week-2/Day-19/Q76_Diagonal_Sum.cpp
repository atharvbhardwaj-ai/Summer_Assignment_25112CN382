#include<iostream>
using namespace std;

void diagonalSum(int arr[50][50], int r, int c){
    if (r != c){
        cout << "Error: Diagonal sum is only defined for square matrices.";
    }
    else {
        int principal_sum = 0;
        for (int i = 0; i < r; i ++){
            principal_sum += arr[i][i];
        }

        cout << "The sum of Principal Diagonal Elements is = " << principal_sum;
    }
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

    // Adding a check in main function as well to prevent Input if the number of rows and columns aren't equal in the first place, i.e. not a Square Matrix.
    if (r != c){
        cout << "Error: Diagonal sum is only defined for square matrices.";
        return 1;
    }

    int M[50][50];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j ++) {
            cout << "M1[" << i << "]" << "[" << j << "] = ";
            cin >> M[i][j];
        }
    }

    diagonalSum(M, r, c);

    return 0;
}