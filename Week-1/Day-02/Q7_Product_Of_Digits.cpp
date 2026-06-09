#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number ";
    cin >> num;
    int product=1,temp=num;
    while(temp>0){
        int remainder=temp%10; // This allows us to get the ones place digit of the number
        product*=remainder;
        temp/=10; // Updates so that each digit can be accesed by shifting it to ones place
    }
    cout << "The Product of digits of " << num << " is " << product;
    return 0;
}