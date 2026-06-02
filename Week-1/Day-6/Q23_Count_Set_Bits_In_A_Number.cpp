#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;
    
    int temp=num;
    int count=0;

    while (temp>0){
        if(temp%2){
            count++;
        }
        temp/=2;
    }

    cout << "The number of Set Bits in " <<num << " is " << count;

    return 0;
}