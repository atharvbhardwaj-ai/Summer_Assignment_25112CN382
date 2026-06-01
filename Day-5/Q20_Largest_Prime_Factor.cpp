#include<iostream>
using namespace std;

int main(){
    long long num; // Use long long to prevent any integer overflow
    cout << "Enter number ";
    cin >> num;

    if(num <= 1){
        cout << "No prime factors for numbers less than or equal to 1" << endl;
        return 1;
    }

    long long originalNum = num;
    long long maxP = -1;

    // Step 1: Count out all the 2s
    while (num % 2 == 0) {
        maxP = 2;
        num /= 2;
    }

    // Step 2: num must be odd now. Check odd factors up to sqrt(num)
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxP = i;
            num /= i;
        }
    }

    // Step 3: If num is still greater than 2, then the remaining num is prime
    if (num > 2) {
        maxP = num;
    }

    cout << "Largest Prime factor of " << originalNum << " is " << maxP << endl;
    return 0;
}