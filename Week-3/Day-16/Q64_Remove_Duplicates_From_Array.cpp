#include<iostream>
using namespace std;

void insertionSort (int arr[], int n){
    for (int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int removeDuplicates(int arr[], int n){
    int unique_index = 0;
    for (int i=1; i<n; i++){
        if (arr[i] != arr[unique_index]){
            unique_index ++;
            arr[unique_index] = arr[i];
        }
    }

    return unique_index;
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
    int n1 = removeDuplicates (arr, n);

    cout << "The Updated Array without Duplicates is-" <<endl;
    for (int i=0; i<=n1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}