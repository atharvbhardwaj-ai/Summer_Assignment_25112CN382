#include<iostream>
using namespace std;

int main(){
    int decimal;
    cout << "Enter decimal no ";
    cin >> decimal;

    // To Save Computational Power, Directly Checking the 0 Case
    if (decimal == 0) {
        cout << "The binary number is-" << endl << 0 << endl;
        return 0;
    }

    int temp=decimal;
    int binaryNum[32];
    int i=0;

    while(temp>0){
        binaryNum[i]=(temp%2);
        temp/=2;
        i++;
    }

    cout << "The binary number is-" <<endl;

    for(int j=(i-1);j>=0;j--){
        cout<<binaryNum[j];
    }
    cout <<endl;
    
    return 0;
}