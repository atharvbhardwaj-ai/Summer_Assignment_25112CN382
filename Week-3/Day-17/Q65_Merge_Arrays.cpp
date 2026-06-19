#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i ++){
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2){
    insertionSort (arr1, n1);
    insertionSort (arr2, n2);
    int arr[100];
    int i = 0, j = 0;

    for (int k = 0; k < (n1 + n2); k ++){
        if (i >= n1){
            arr[k] = arr2[j];
            j ++;
        }    
        else if (j >= n2){
            arr[k] = arr1[i];
            i ++;
        }
        else if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i ++;
        }
        else {
            arr[k] = arr2[j];
            j ++;
        }
    }

    cout << "The Merged Array is -" <<endl;
    for (int i = 0; i < (n1 + n2); i ++){
        cout << arr[i] <<" ";
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

    mergeArrays(arr1, n1, arr2, n2);

    return 0;
}