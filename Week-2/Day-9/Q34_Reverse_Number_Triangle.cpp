#include<iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter no of rows ";
    cin >> rows;
    
    int i,j;
    for(i=rows;i>=1;i++){
        for(j=i;j<=rows;j++){}
    }
}