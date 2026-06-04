#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter no of rows ";
    cin >> rows;
    
    int i,j,val;

    for(i=1;i<=rows;i++){
        val = 1;     // To reset the value for each row
        for(j=1;j<=i;j++){
            cout << j;     // Ignored Space due to the Pattern Given in Question
        }
        cout <<endl;
    }
    
    return 0;

}