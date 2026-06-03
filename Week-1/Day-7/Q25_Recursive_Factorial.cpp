#include<iostream>
using namespace std;

long long factorial (int a){
    if(a==0){
        return 1;                     // Base Case
    }
    else{
        return a * factorial(a-1);   // Recursive Case
    }
}

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;

    if(num<0){
        cout << "Factorial of Negative Numbers is undefined";
        return 0;
    }

    // long long data type to avoid Memory Overflow for larger integers
    long long facto = factorial(num);
    cout << "The factorial of " << num << " is " << facto;

    return 0;
}