#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;
    int sum_of_digits=0,temp=num;
    while(temp>0){
        int remainder=temp%10; // This allows us to get the ones place digit of the number
        sum_of_digits+=remainder;
        temp/=10; // Updates so that each digit can be accesed by shifting it to ones place
    }
    cout << "The sum of digits of " << num << " is " << sum_of_digits;
    return 0;
}