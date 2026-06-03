#include<iostream>
using namespace std;

int sum_of_digits(int a){
    if(a==0){
        return 0;    // Base Case
    }
    else{
        return ((a%10)+sum_of_digits(a/10));  // Recursive Case
    }
}

int main(){
    int num;
    
    cout << "Enter number ";
    cin >> num;

    cout << "The sum of digits of " << num << " is " << sum_of_digits(num) <<endl;
    return 0;
}