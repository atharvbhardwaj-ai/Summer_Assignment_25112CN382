#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int low = 0, high = n-1;
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low ++;
        high --;
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

    cout << "The Reversed Array is-" <<endl;

    reverseArray (arr, n);

    for (int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}