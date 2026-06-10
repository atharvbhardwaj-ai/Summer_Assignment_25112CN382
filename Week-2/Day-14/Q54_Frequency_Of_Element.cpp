#include<iostream>
using namespace std;

int getElementFrequency(int arr[], int n, int target){
    int element_frequency = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            element_frequency ++;
        }
    }

    return element_frequency;
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

    for (int i=0; i<n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int element;
    cout << "Enter element whose frequency has to be found ";
    cin >> element;

    cout << "The Frequency of " << element << " in given Array is " << getElementFrequency(arr, n, element);

    return 0;
}