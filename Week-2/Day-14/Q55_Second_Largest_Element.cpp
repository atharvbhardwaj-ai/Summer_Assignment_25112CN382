#include<iostream>
#include<limits>

using namespace std;

int secondLargestElement(int arr[], int n){
    int largest_element = numeric_limits<int>::min(), second_largest_element = numeric_limits<int>::min();

    for (int i=0; i<n; i++){
        if (arr[i] > largest_element){
            second_largest_element = largest_element;
            largest_element = arr[i];
        }
        else if (arr[i] > second_largest_element && arr[i] != largest_element){
            second_largest_element = arr[i];
        }
    }

    return second_largest_element;
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

    int second_largest_element = secondLargestElement (arr, n);

    if (second_largest_element != numeric_limits<int>::min()){
        cout << "The Second Largest Element of the Array is " << second_largest_element;
    }
    else{
        cout << "All elements are Duplicates";
    }

    return 0;
}