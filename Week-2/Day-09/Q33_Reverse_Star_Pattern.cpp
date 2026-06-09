#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter no of rows ";
    cin >> rows;
    
    int i,j;
    for (i = 1; i <= rows; i++){
        for ( j = i; j <= rows; j++){
            cout << "* ";
        }
        cout <<endl;
    }

    return 0;
}