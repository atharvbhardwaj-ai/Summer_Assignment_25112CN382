#include<iostream>
using namespace std;

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int n1, n2;

    cout << "Enter size of first sorted array ";
    cin >> n1;
    if (n1 <= 0) {
        cout << "Array size must be greater than 0";
        return 1;
    }
    int arr1[50];
    cout << "Enter elements of first sorted array ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array ";
    cin >> n2;
    if (n2 <= 0) {
        cout << "Array size must be greater than 0";
        return 1;
    }
    int arr2[50];
    cout << "Enter elements of second sorted array ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int result[100];
    mergeSortedArrays(arr1, n1, arr2, n2, result);

    cout << "Merged sorted array is -\n";
    for (int i = 0; i < n1 + n2; i++) {
        cout << result[i] << " ";
    }

    return 0;
}