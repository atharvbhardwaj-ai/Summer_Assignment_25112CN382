#include<iostream>
using namespace std;

void calculateSumAndAverage(int arr[], int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    double avg = (double) sum / n;  // Using Double data-type to get Precise Average
    cout << "The sum and average of elements of Inputted Array is " << sum << " and " << avg <<" respectively";

}

int main(){
    int arr[50], n;

    cout << "Enter no of elements ";
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

    calculateSumAndAverage (arr, n);

    return 0;
}