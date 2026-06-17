#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i ++){
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = key;
    }
}

void unionOfArrays(int arr1[], int n1, int arr2[], int n2){
    int arr[100];
    int i = 0, j = 0, k = 0; // 'k' tracks the actual unique size of our destination array

    insertionSort(arr1, n1);
    insertionSort(arr2, n2);

    // Loop 1: Direct comparison
    while (i < n1 && j < n2) {
        int current_val;

        // Pick the smaller element or handle matching twins
        if (arr1[i] < arr2[j]) {
            current_val = arr1[i];
            i++;
        } 
        else if (arr1[i] > arr2[j]) {
            current_val = arr2[j];
            j++;
        } 
        else { // Twins: arr1[i] == arr2[j]
            current_val = arr1[i];
            i++;
            j++;
        }

        // Only insert if it's the first element OR not a duplicate
        if (k == 0 || current_val != arr[k - 1]) {
            arr[k] = current_val;
            k++;
        }
    }

    // Loop 2: Drain remaining elements from arr1
    while (i < n1) {
        if (k == 0 || arr1[i] != arr[k - 1]) {
            arr[k] = arr1[i];
            k++;
        }
        i++;
    }

    // Loop 3: Drain remaining elements from arr2
    while (j < n2) {
        if (k == 0 || arr2[j] != arr[k - 1]) {
            arr[k] = arr2[j];
            k++;
        }
        j++;
    }

    cout << "The Union Array is -" << endl;
    for (int l = 0; l < k; l++) {
        cout << arr[l] << " ";
    }
}

int main(){
    int arr1[50], n1, arr2[50], n2;

    cout << "Enter no of elements in arrays ";
    cin >> n1 >> n2;

    // Boundary Guard Clause: Catch illegal array bounds early
    if (n1 < 1 || n1 > 50 || n2 < 1 || n2 > 50) {
        cout << "Error: Array size must be between 1 and 50.";
        return 1; // Terminate early with a non-zero error signal
    }

    for (int i = 0; i < n1; i ++){
        cout << "arr1[" << i << "] = ";
        cin >> arr1[i];
    }

    for (int i = 0; i < n2; i ++){
        cout << "arr2[" << i << "] = ";
        cin >> arr2[i];
    }

    unionOfArrays(arr1, n1, arr2, n2);

    return 0;
}