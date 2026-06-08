#include<iostream>
using namespace std;

int sum (int a, int b){  // Function returns integer type (Sum of numbers in Actual Parameters)
    return a + b;
}

int main(){
    int n1, n2; // Declaration of Both Numbers
    
    cout << "Enter numbers to be added ";
    cin >> n1 >> n2;

    int s = sum (n1, n2);  // Calling the Function for Calculating Sum and Storing in Variable for Clarity
    cout << "The sum of " << n1 << " and " << n2 << " is " << s;

    return 0;
}