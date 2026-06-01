#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;
    if(num<=0){
        cout << "Only Positive Numbers can be a Perfect Number" <<endl;
        return 1;
    }

    // Iterating backwards from num-1 to find all proper divisors efficiently
    int sum=0;
    for(int i=num-1;i>0;i--){
        if(num%i==0){
            sum+=i;
        }
    }

    if(sum==num){
        cout << num << " is a Perfect number" <<endl;
    }
    else{
        cout << num << " is not a Perfect number" <<endl;
    }

    return 0;
}