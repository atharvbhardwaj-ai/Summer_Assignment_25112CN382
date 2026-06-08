#include<iostream>
using namespace std;

// Using User-Defined Power function since cmath pow function gives (5^3) as 124.9999..
int power (int base, int exponent){
    int p = 1;

    for(int i=1; i<=exponent; i++){
        p *= base;
    }

    return p;
}

bool armstrong (int a){
    if(a<=0){
        return false;
    }

    // Using Temporary Variable to Retain Value of Formal Parameter for Verification at end
    int temp = a, armstr = 0, count = 0;

    // Checking No of Digits in The Number to get a Constant Value
    while(temp){
        temp/=10;
        count ++;  
    }

    temp = a;
    
    while(temp){
        armstr += power(temp%10,count);
        temp/=10;
    }

    return armstr == a;
}

int main(){
    int num;

    cout << "Enter number ";
    cin >> num;

    if (armstrong (num)){
        cout << num << " is Armstrong" <<endl;
    }
    else{
        cout << num << " is not Armstrong" <<endl;
    }

    return 0;
}