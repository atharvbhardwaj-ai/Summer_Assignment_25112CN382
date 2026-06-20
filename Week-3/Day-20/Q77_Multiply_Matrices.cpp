#include<iostream>
using namespace std;

void multiplyMatrices(int arr1[][50], int r1, int c1, int arr2[][50], int r2, int c2){
    if (c1 != r2) {
        cout << "Multiplication Not Possible";
        return;
    }

    long long arr3[50][50]; // To Prevent Integer Overflow from Multiplication

    for (int i = 0; i < r1; i ++){
        for (int j = 0; j < c2; j ++) {
            long long result = 0;
            for (int k = 0; k < c1; k ++){
                result += (long long)arr1[i][k] * arr2[k][j]; 
            }
            arr3[i][j] = result;
        }
    }

    cout << "The Multiplication of the 2 Matrices is -" <<endl;
    for (int i = 0; i < r1; i ++) {
        for (int j = 0; j < c2; j ++){
            cout << arr3[i][j] << " ";
        }
        cout <<endl;
    }
}

int main(){
    int r1, c1, r2, c2;
    
    cout << "Enter no of rows & columns of First Matrix ";
    cin >> r1 >> c1;
    cout << "Enter no of rows & columns of Second Matrix ";
    cin >> r2 >> c2;

    // Boundary Guard Clause
    if (r1 < 1 || r1 > 50 || r2 < 1 || r2 > 50 || c1 < 1 || c1 >50 || c2 < 1 || c2 > 50) {
        cout << "Number of Rows or Columns can't be greater than 50 or smaller than 1";
        return 1; // Ending Program with '1' for unsucessful Signal
    }

    if (c1 != r2) {
        cout << "Matrix Multiplication not Possible";
        return 1; // Returning '1' as Unsuccessful Signal
    }

    int M1[50][50], M2[50][50];

    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j ++) {
            cout << "M1[" << i << "]" << "[" << j << "] = ";
            cin >> M1[i][j];
        }
    }
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j ++) {
            cout << "M2[" << i << "]" << "[" << j << "] = ";
            cin >> M2[i][j];
        }
    }

    multiplyMatrices(M1, r1, c1, M2, r2, c2);

    return 0;
}