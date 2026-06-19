#include<iostream>
using namespace std;

void addMatrices (int arr1[50][50], int r1, int c1, int arr2[50][50], int r2, int c2){
    int arr[50][50];

    // Added Row, Column Check Clause in Function to not make it dependent on main() function
    if (r1 != r2 || c1 != c2){
        cout << "Addition not Possible between given matrices";
    }
    else {
        for (int i = 0; i < r1; i ++){
            for (int j = 0; j < c1; j ++){
                arr[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        cout << "The Sum of the 2 Matrices is -" <<endl;
        for (int i = 0; i < r1; i ++){
            for (int j = 0; j <c1; j ++){
                cout << arr[i][j] << " ";
            }
            cout <<endl;
        }
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

    addMatrices(M1, r1, c1, M2, r2, c2);

    return 0;
}