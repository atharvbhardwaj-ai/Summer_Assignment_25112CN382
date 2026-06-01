#include<iostream>
using namespace std;

// Using Recursive Power function since cmath pow function gives (5^3) as 124.9999..
int power(int a, int b){
    if (b==0){
        return 1;
    }
    else{
        return a * power(a,b-1);
    }
}

int main(){
    int num;
    cout << "Enter a number ";
    cin >> num;
    
    if(num<=0){
        cout << num << " is not an Armstrong Number" <<endl;
        return 0;
    }
    
    int temp=num,count=0;
    while(temp>0){
        temp/=10;
        count++;    //For counting the no of digits
    }

    int sum=0;
    temp=num;
    while(temp>0){
        sum+=power((temp%10),count);  // Adding each digit with power as the no of digits
        temp/=10;
    }
    if(sum==num){
        cout << num <<" is an Armstrong Number" <<endl;
    }
    else{
        cout << num << " is not an Armstrong Number" <<endl;
    }
    return 0;
}