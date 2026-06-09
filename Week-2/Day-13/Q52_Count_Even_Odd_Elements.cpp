#include<iostream>
using namespace std;

void countEvenOdd(int arr[], int n){
    int even_count = 0, odd_count = 0;

    for (int i=0; i<n; i++){
        if (arr[i]%2 == 0){
            even_count ++;
        }
        else{
            odd_count ++;
        }
    }

    cout << "The number of Even & Odd Elements in the array are " << even_count << " and " << odd_count << " respectively";

}

int main(){
    int arr[50], n;

    cout << "Enter no of elements ";
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

    countEvenOdd (arr, n);

    return 0;
}