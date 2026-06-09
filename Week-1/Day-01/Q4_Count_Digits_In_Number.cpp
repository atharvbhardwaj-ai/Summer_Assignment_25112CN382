#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;
    int no_of_digits=0;
    int temp=num;
    while(temp>0){
        no_of_digits++;
        temp/=10;
    }
    cout << "The number of digits in " << num << " is " << no_of_digits;
    return 0;
}