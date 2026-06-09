#include<iostream>
using namespace std;

int fibonacci (int a){
    if(a<=0){
        return 0;           // Base Cases
    }
    else if(a==1){
        return 1;           // Base Cases           
    }
    else{
        return (fibonacci(a-1)+fibonacci(a-2));  // Recursive Case
    }
}

int main(){
    int n,i;
    cout << "Enter no of terms of Fibonacci Series to be printed ";
    cin >> n;
    for(i=0;i<n;i++){
        cout << fibonacci(i) <<endl;
    }
    return 0;
}