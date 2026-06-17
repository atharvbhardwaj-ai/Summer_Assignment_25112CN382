#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i ++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort (arr, n);

    cout << "The Array sorted in Descending Order is -" <<endl;
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }

    return 0;
}