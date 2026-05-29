#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;
    int rev=0,temp=num;
    while (temp>0){
        int remainder=temp%10; // This allows us to get the ones place digit of the number
        rev=(rev*10)+remainder;
        temp/=10; // Updates so that each digit can be accesed by shifting it to ones place
    }
    cout << "The reverse of " << num << " is " << rev;
    return 0;
}