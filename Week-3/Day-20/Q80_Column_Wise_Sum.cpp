#include<iostream>
using namespace std;

void columnWiseSum(int arr[][50], int r, int c){
    for (int i = 0; i < c; i ++){
        int column_sum = 0;
        for (int j = 0; j < r; j ++){
            column_sum += arr[j][i];
        }
        cout << "The sum of Column-" << (i + 1) << " is " << column_sum <<endl; 
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
            cout << "M[" << i << "]" << "[" << j << "] = ";
            cin >> M[i][j];
        }
    }

    columnWiseSum(M, r, c);

    return 0;
}