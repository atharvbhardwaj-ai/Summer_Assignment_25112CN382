#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter no of rows ";
    cin >> rows;
    
    int i,j;

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout << (char)('A' + j - 1);
        }
        cout <<endl;
    }
    
    return 0;

}