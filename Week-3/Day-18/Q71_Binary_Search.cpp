#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0, high = n - 1;
    while (low <= high){
        int mid = low + (high - low)/2; // To Avoid Integer Overflow

        if (arr[mid] == key){
            return mid; // Returning Index of Found Key Element
        }
        else if (arr[mid] < key){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1; // A Signal to main function that Key Element wasn't found
}

int main(){
    int arr[50], n;

    cout << "Enter no of elements in array (Must be Sorted in Ascending Order) ";
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
    cout << "Enter element to be Searched in array ";
    cin >> key;

    int loc = binarySearch(arr, n, key);

    if (loc != -1){
        cout << key << " found at Index " << loc ;
    }
    else {
        cout << key << " not found in given Array";
    }

    return 0;
}