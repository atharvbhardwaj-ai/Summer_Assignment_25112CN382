#include<iostream>
using namespace std;

// Using long long data-type to avoid Memory Overflow of int data-type
long long factorial (int a){
    long long facto = 1;
    
    for(int i=a; i>1; i--){
        facto *= i;   // Updating Factorial Variable 
    }

    return facto;
}

int main(){
    int num;

    cout << "Enter the number ";
    cin >> num;

    // Calling Function in a long long data-type variable for the same reason as above
    long long f = factorial (num);  
    cout << "The Factorial of " << num << " is " << f <<endl;

    return 0;
}