#include<iostream>
using namespace std;

void rotateLeft(int arr[], int n){
    int temp = arr[0];

    for (int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
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

    rotateLeft (arr, n);

    cout << "The Array on Rotating Left is-" <<endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}