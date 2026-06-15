#include<iostream>
using namespace std;

void rotateRight(int arr[], int n){
    int temp = arr[n-1];

    for (int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
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

    rotateRight (arr, n);

    cout << "The Array on Rotating Right is-" <<endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}