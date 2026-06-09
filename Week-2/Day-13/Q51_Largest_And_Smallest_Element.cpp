#include<iostream>
using namespace std;

void findMinMax(int arr[], int n){
    int largest_element = arr[0], smallest_element = arr[0];

    // Initialising Loop from i=1 since base value of largest, smallest element are from the 0 Index
    for (int i=1; i<n; i++){
        if (largest_element < arr[i]){
            largest_element = arr[i];
        }
        if (smallest_element > arr[i]){
            smallest_element = arr[i];
        }
    }

    cout << "The Largest & Smallest Element of the array are " << largest_element << " and " << smallest_element << " respectively";

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

    findMinMax (arr, n);

    return 0;
}