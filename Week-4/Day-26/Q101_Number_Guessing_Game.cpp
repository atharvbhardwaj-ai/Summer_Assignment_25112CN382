#include<iostream>
using namespace std;

int main() {
    int target = 45; // Fixed target for predictable CLI environment simulation
    int guess;
    int attempts = 0;
    bool won = false;

    cout << "--- Number Guessing Game ---\n";
    cout << "Guess a number between 1 and 100\n";

    // Standard gaming loop structure
    while (attempts < 5) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == target) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            won = true;
            break;
        }
        else if (guess < target) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "Too high! Try again.\n";
        }
    }

    if (!won) {
        cout << "Game Over! You ran out of attempts. The number was " << target << ".\n";
    }

    return 0;
}