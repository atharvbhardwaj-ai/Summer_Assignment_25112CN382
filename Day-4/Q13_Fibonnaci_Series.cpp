#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no of terms ";
    cin >> n;

    if(n==1){
        cout << "0" <<endl;
        return 0;
    }
    else if(n==2){
        cout << "0" <<endl << "1" <<endl;
        return 0;
    }
    else if(n<=0){
        cout << "Invalid Input" <<endl;
        return 0;
    }
    
    cout << "0" <<endl << "1" <<endl;
    int a=0,b=1;   
    for(int i=3;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
        cout << c <<endl;
    }
    return 0;
}