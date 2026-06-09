#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n ";
    cin >> n;

    if(n==1){
        cout<< "0" <<endl;
        return 0;
    }
    
    else if (n==2){
        cout << "1" <<endl;
        return 0;
    }
    
    else if (n<=0){
        cout << "Invalid Term" <<endl;
        return 0;
    }

    int a=0,b=1,c;
    for(int i=3;i<=n;i++){
        c = a+b;
        a=b;
        b=c;
    }
    cout << b;
    return 0;
}