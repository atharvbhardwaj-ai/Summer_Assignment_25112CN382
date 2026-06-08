#include<iostream>
using namespace std;

// Declaring Function with Boolean Return Type
bool isPrime (int a){  
    if(a<=1){
        return false;
    }

    // Using Optimised Loop to Reduce Time Complexity
    for(int i=2; i*i <= a; i++){  
        if(a%i == 0){
            return false; // Number is not prime if it has any factor other than 1 and the Number Itself
        }
    }

    return true;
}

int main(){
    int num;
    
    cout << "Enter the number ";
    cin >> num;

    // Calling Function and Setting Conditions
    if(isPrime(num)){   
        cout << num << " is Prime" <<endl;
    }
    else{
        cout << num << " is Not Prime" <<endl;
    }

    return 0;
}