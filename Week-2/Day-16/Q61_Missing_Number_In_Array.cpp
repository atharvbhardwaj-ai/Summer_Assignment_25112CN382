#include<iostream>
using namespace std;

// To Solve this Problem in the most efficient manner, The Use of Carl Friedrich Gauss's formula is required.
// The formula evaluates the expected sum of a sequence of say N numbers by-
// ( N * (N+1) ) / 2

int missingNumber(int arr[], int n){
    int sum = 0;

    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    // Using n+1 and n+2 since an array of say 5 Integers will have 1,3,4,5,6 thus the sequence is of 6 consecutive numbers where we find the Missing Number
    int expected_sum = ((n+1) * (n+2)) / 2; 

    return (expected_sum - sum);
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

    cout << "The Missing Number from the Given Sequence is " << missingNumber(arr, n);

    return 0;
}