#include<iostream>
using namespace std;

void PrintPrime(int a){
    bool isPrime=(a>1);
    for(int i=2;i*i<=a;i++){ // Since factors get reversed after square root of number
        if(a%i==0){          // Thus, to save computation power, loop only goes till square root of num
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout << a <<endl;
    }
}

int main(){
    int lower_limit,upper_limit;
    cout << "Enter lower and upper limit of range ";
    cin >> lower_limit >> upper_limit;
    for(int i=lower_limit ; i<=upper_limit ; i++){
        PrintPrime(i);
    }
    return 0;
}