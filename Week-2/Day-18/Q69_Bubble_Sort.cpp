#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i ++){
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j ++){
            if (arr[j] > arr[j + 1]){
                swap (arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped){
            break;  // Breaks the loop early if no two elements were swapped in any iteration of outer 'i' loop
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

    bubbleSort (arr, n);

    cout << "The Sorted Array is -" <<endl;
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }

    return 0;
}