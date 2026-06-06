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
        
        // Incrementally printing sequence up to the row peak
        for(j=1;j<=i;j++){
            cout << j;
        }
        
        // Decrementally printing sequence back to baseline
        for(j=i-1;j>=1;j--){
            cout << j;
        }

        cout <<endl;
    }

    return 0;
}