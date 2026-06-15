#include<iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n){
    int non_zero_index = 0;

    for (int i=0; i<n; i++){
        if (arr[i]){
            swap (arr[i], arr[non_zero_index]);
            non_zero_index ++;
        }
    }
}

int main(){
    int arr[50], n;
    
    cout << "Enter no of elements in array ";
    cin >> n;

    // Boundary Guard Clause: Catch illegal array bounds early
    if (n < 1 || n > 50) {
        cout << "Error: Array size must be between 1 and 50.";
        return 1; // Terminate early with a non-zero error signal
    }

    for (int i=0; i<n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    moveZerosToEnd (arr, n);

    cout << "The Updated Array is -" <<endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}