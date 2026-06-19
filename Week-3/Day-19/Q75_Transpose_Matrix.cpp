#include<iostream>
using namespace std;

// Prevents unnecessary use of an extra Matrix
void transposeSquare(int arr[50][50], int n){
    for (int i = 0; i < n; i ++){
        for (int j = i + 1; j < n; j ++){
            swap(arr[i][j], arr[j][i]);
        }
    }   

    cout << "Transposed Square Matrix is:" <<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }
}

// For a non-square matrix, requiring another Matrix
void transposeRectangle(int arr[50][50], int r, int c) {
    int transpose[50][50];

    for (int i = 0; i < r; i ++){
        for (int j = 0; j < c; j ++){
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transposed Matrix is:" <<endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << transpose[i][j] << " ";
        }
        cout <<endl;
    }
}

// To Check Which function needs to be called
void transpose(int arr[50][50], int r, int c){
    if (r == c){
        transposeSquare (arr, r);
    }
    else {
        transposeRectangle (arr , r, c);
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

    int M[50][50];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j ++) {
            cout << "M1[" << i << "]" << "[" << j << "] = ";
            cin >> M[i][j];
        }
    }

    transpose(M,r,c);

    return 0;
}