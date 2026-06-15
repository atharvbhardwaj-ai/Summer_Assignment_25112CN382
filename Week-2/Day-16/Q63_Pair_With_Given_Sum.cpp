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

void findPairWithSum (int arr[], int n, int target){
    int low = 0, high = n-1;
    bool found = false;

    while (low < high){
        int current_sum = arr[low] + arr[high];

        if (current_sum == target){
            cout << arr[low] << " " << arr[high] << endl;
            found = true;
            low ++;  // Move both only when a unique pair is documented
            high --;
        }

        else if (current_sum < target){
            low ++;  // Sum is too small, look for a larger value
        }

        else{
            high --;  // Sum is too large, look for a smaller value
        }
    }

    if (!found){
        cout << "No Matching Pairs Found!";
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

    int sum;
    cout << "Enter the required target sum of pairs ";
    cin >> sum;

    findPairWithSum (arr, n, sum);

    return 0;
}