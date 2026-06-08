#include<iostream>
using namespace std;

bool palindrome (int a){
    int rev = 0, temp = a;

    while (temp){
        rev = (rev*10) + (temp%10);
        temp/=10;
    }

    return rev == a;
}

int main(){
    int num;

    cout << "Enter number ";
    cin >> num;

    if (palindrome(num)){
        cout << num << " is Palindrome" <<endl; 
    }
    else{
        cout << num << " is Not Palindrome" <<endl;
    }

    return 0;
}