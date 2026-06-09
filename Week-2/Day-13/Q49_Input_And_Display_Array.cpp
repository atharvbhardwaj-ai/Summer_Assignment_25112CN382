#include<iostream>
using namespace std;

void displayArray(int arr[], int n){

    // Loop to print each element of User-Entered Array
    for (int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int arr[50], n;
    
    cout << "Enter no of elements in the array ";
    cin >> n;

    // Boundary Guard Clause: Catch illegal array bounds early
    if (n < 1 || n > 50) {
        cout << "Error: Array size must be between 1 and 50.";
        return 1; // Terminate early with a non-zero error signal
    }

    // Loop to input the no of elements specified by the User
    for (int i=0; i<n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "The Inputed Array is -" <<endl;
    displayArray (arr, n);

    return 0;
}