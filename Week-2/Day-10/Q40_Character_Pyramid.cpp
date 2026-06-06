#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter rows ";
    cin >> rows;

    int i,j;
    for(i=1;i<=rows;i++){

        // Printing leading spaces to center-align the row
        for(j=1;j<=rows-i;j++){
            cout << " ";
        }
        
        // Incrementally printing sequence up to the row peak
        for(j=1;j<=i;j++){
            cout << (char)('A' + j - 1); // Explicit Type-Casting: Convert ASCII integer offsets into characters
        }
        
        // Decrementally printing sequence back to baseline
        for(j=i-1;j>=1;j--){
            cout << (char)('A' + j - 1);
        }
        
        
        cout <<endl;
    }

    return 0;
}