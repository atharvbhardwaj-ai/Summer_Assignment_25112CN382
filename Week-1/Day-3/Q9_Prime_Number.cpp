#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number ";
    cin >> num;
    bool isPrime = (num>1);
    for(int i=2;i*i<=num;i++){  // Since factors get reversed after square root of number
        if(num%i==0){           // Thus, to save computation power, loop only goes till square root of num
            isPrime=false;
            break;
        }
    }
    if(isPrime == true)
        cout << num <<" is Prime"<<endl;
    else
        cout << num << " is not Prime" <<endl;
        
    return 0;
}