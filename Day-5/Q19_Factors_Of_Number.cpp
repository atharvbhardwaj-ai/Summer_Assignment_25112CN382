#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number ";
    cin >> num;

    // Factors are Invalid for Negative Numbers or 0 so getting that case out of the way at the beginning
    if(num<=0){
        cout << "Only Factors for +ve numbers";
        return 1;
    }
    
    cout << "The factors of " <<num << " are" <<endl;

    // Running optimized loop up to sqrt(num) to grab factor pairs simultaneously
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            cout << i <<endl;
            if(i*i!=num){
                cout << num/i <<endl;
            }
        }
    }
    return 0;
}