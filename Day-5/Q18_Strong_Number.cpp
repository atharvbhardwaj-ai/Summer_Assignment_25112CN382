#include<iostream>
using namespace std;

// Using an iterative factorial function to get individual digit factorials
int factorial (int a){
    int facto=1;
    for(int i=a;i>1;i--){
        facto*=i;
    }
    return facto;
}

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;

    if(num<=0){
        cout << "Only Positive Numbers can be a Strong Number" <<endl;
        return 1;
    }

    int temp=num,sum=0;
    while(temp>0){
        sum+=factorial((temp%10));
        temp/=10;
    }

    if(sum==num){
        cout << num << " is a Strong Number" <<endl;
    }
    else{
        cout << num << " is not a Strong Number" <<endl;
    }
    
    return 0;
}