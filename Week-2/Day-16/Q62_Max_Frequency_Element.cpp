#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i=1; i<n; i++){
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int maxFrequencyElement(int arr[], int n) {
    int max_count = 1, current_count = 1;
    int max_freq_element = arr[0];

    for (int i=1; i<n; i++){
        if (arr[i] == arr[i-1]) {
            current_count++;
        } 
        else {
            if (current_count > max_count){
                max_count = current_count;
                max_freq_element = arr[i - 1];
            }
            current_count = 1;
        }
    }
    if (current_count > max_count) {
        max_freq_element = arr[n - 1];
    }

    return max_freq_element;
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

    cout << "The element with maximum frequency is " << maxFrequencyElement (arr, n);

    return 0;
}