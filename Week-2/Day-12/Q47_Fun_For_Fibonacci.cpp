#include<iostream>
using namespace std;

void fibonacci (int n){
    if (n == 1){
        cout << "0" <<endl;
    }
    else if (n == 2){
        cout << "0" <<endl << "1" <<endl;
    }

    else{
        int a = 0, b = 1, c;
        
        cout << "0" <<endl << "1" <<endl;
        for (int i=3; i<=n; i++){
            c = a + b;
            a = b;
            b = c;
            cout << c <<endl;
        }
    }
}

int main(){
    int n;

    cout << "Enter nth term till which Series will be printed ";
    cin >> n;

    if (n<1){
        return 0;
    }

    cout << "The Fibonacci Series is-" <<endl;

    fibonacci(n);

    return 0;
}