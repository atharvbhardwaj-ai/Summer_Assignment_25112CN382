#include<iostream>
using namespace std;

// Not using Recursive Function to Avoid Call Stack Overflow

int main(){
    int num1,num2;
    cout << "Enter numbers whose GCD has to be found ";
    cin >> num1 >> num2;
    int temp1=num1, temp2=num2;
    while(temp2>0){
        int temp=temp1%temp2;
        temp1=temp2;
        temp2=temp;
    }
    cout << "The GCD of " << num1 << " and " << num2 << " is " << temp1;
    return 0;
}