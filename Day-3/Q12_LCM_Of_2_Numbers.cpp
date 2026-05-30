#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter numbers whose LCM has to be found ";
    cin >> num1 >> num2;
    int temp1=num1, temp2=num2;
    while(temp2>0){
        int temp=temp1%temp2;
        temp1=temp2;
        temp2=temp;
    }
    int LCM=(num1*num2)/temp1;
    cout << "The LCM of " << num1 << " and " << num2 << " is " << LCM;
    return 0;
}