#include<iostream>
using namespace std;

int main(){
    double num;
    int power;
    double result=1.0;

    cout << "Enter base and exponent ";
    cin >> num >> power;

    if (num == 0.0 && power <= 0) {
        cout << "Error: Undefined mathematical operation (division by zero or 0^0)." << endl;
        return 1; // Return non-zero to signal execution failure
    }

    long long temp = power; // Done to keep Input Stored and to avoid Case Failutre at INT_MIN

    if(temp<0){
        temp = -temp;
    }
    
    while (temp>0){
        result*=num;
        temp--;
    }

    if(power < 0){
        result = (1.0/result);
    }
    
    cout << "Result = " <<result;

    return 0;
}