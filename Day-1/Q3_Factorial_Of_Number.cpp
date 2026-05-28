#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number ";
    cin >> num;
    int factorial=1;
    for(int i=num;i>1;i--){
        factorial*=i;
    }
    cout << "Factorial of " << num << " is " << factorial <<endl;
    return 0;
}