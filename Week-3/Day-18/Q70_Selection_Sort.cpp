#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i ++){
        int min_idx = i;
        for (int j = i + 1; j < n; j ++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
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

    selectionSort (arr, n);

    cout << "The Sorted Array is -" <<endl;
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }

    return 0;
}