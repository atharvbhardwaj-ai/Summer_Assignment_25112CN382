#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter no of rows ";
    cin >> rows;
    
    int i,j;
    for(i=1;i<=rows;i++){
        
        // Printing leading spaces to center-align the row
        for(j=1;j<=rows-i;j++){
            cout << " ";
        }
        
        // Print odd-numbered sequences of Star Character
        for(j=1;j<=(2*i-1);j++){
            cout <<"*";
        }
        
        cout <<endl;
    }

    return 0;
}