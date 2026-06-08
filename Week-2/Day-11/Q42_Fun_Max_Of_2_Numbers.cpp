#include<iostream>
using namespace std;

// Function returns the Larger No from the Actual Paramters
int max (int a, int b){  
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n1, n2;  // Declaration of Input Numbers

    cout << "Enter both the numbers ";
    cin >> n1 >> n2;

    int m = max (n1, n2);  // Calling max Function and storing the return value in variable m of data-type int (Same as Return Type of Function)
    cout << "The max number out of " << n1 << " and " << n2 << " is " << m;

    return 0;  
}