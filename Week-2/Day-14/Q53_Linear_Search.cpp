#include<iostream>
using namespace std;

// Returns Index Of Searched Element
int linearSearch(int arr[], int n, int key){
    for (int i=0; i<n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
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

    int key;
    cout << "Enter element to be found ";
    cin >> key;

    // Storing in Variable to Prevent Calling it twice for Output as well
    int pos = linearSearch(arr, n, key);
    
    if (pos == -1){
        cout << "Searched Element not found";
    }
    else{
        cout << "Element found at Index " << pos;
    }

    return 0;
}