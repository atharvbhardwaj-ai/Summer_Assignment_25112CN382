#include<iostream>
using namespace std;

int reverse_number(int a, int running_total){
    if(a==0){
        return running_total;      // Base Case
    }
    else{
        return reverse_number(a/10,(running_total*10 + a%10));  // Recursive Case
    }
}

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;

    cout << "The reverse of " << num << " is ";
    
    // Defensive check: Handle literal 0 directly
    if (num == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    // Trap and print trailing zeros sequentially
    while (num%10 == 0) {
        cout << 0;
        num /= 10;
    }
    
    // Fixed the typical bug of program ignoring 0s while reversing integers such as 1800
    cout << reverse_number(num, 0) << endl;  
    
    return 0;
}