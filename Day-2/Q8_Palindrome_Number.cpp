#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number ";
    cin >> num;
    int rev=0,temp=num;
    while (temp>0){
        int remainder=temp%10;
        rev=(rev*10)+remainder;
        temp/=10;
    }
    if(rev==num){
        cout << num <<" is Palindrome" <<endl;
        return 0;
    }
    cout << num << " is not Palindrome" <<endl;
    return 0;
}