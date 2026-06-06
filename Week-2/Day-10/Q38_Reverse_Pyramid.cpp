#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter no of rows ";
    cin >> rows;

    int i,j;
    for(i=rows;i>=1;i--){
        
        // Printing leading spaces to center-align the row
        for(j=1;j<=rows-i;j++){
            cout << " ";
        }
        
        // Outer Loop Inversion: Reversing row traversal automatically flips the geometry
        for(j=1;j<=(2*i-1);j++){
            cout <<"*";
        }
        
        cout <<endl;
    }

    return 0;
}