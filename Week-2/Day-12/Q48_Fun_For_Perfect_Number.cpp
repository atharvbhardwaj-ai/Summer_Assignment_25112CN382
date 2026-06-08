#include<iostream>
using namespace std;

bool perfect_number (int a){
    if (a <= 1){
        return false;
    }

    // Initialising at 1 Since 1 is a Factor of Any Positive Integer, Thus reducing an Iteration of the Loop
    int p = 1;

    // Using an Optimised Loop to Reduce No of Iterations of Loop Significantly For Larger Values
    // O(sqrt(n))
    for (int i=2; i*i<=a; i++){
        if (a%i == 0){
            p += i;
            if (i*i != a){
                p += (a/i);
            }
        }
    }

    return p == a;
}

int main(){
    int num;

    cout << "Enter the number ";
    cin >> num;

    if (perfect_number (num)){
        cout << num << " is a Pefect Number" <<endl;
    }
    else{
        cout << num << " is Not a Perfect Number" <<endl;
    }

    return 0;
}