#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long binary;
    
    cout << "Enter binary number ";
    cin >> binary;
    
    int count=0;
    long long temp=binary;

    while(temp>0){
        temp/=10;
        count++;
    }
    
    int decimal=0,weight=1;
    temp=binary;
    
    for(int i=0;i<count;i++){
        decimal+=(weight*(temp%10));
        weight*=2;
        temp/=10;
    }
    
    cout << "The decimal number is -" <<endl <<decimal;
    
    return 0;
}