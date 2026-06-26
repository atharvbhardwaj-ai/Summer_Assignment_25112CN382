#include<iostream>
#include<string>
using namespace std;

int main() {
    string questions[3] = {
        "What is the time complexity of a Binary Search lookup?",
        "Which memory management issue causes a program crash from invalid pointers?",
        "Modern C++ strings are handled as native primitives (True/False)?"
    };

    string options[3] = {
        "A) O(N)     B) O(log N)   C) O(N^2)",
        "A) Overrun  B) Leak       C) Segmentation Fault",
        "A) True     B) False"
    };

    char correct_answers[3] = {'B', 'C', 'B'};
    char user_answer;
    int score = 0;

    cout << "--- Technical Core Evaluation Quiz ---\n\n";

    for (int i = 0; i < 3; i++) {
        cout << "Q" << (i + 1) << ": " << questions[i] << "\n";
        cout << options[i] << "\n";
        cout << "Your Answer (A/B/C): ";
        cin >> user_answer;

        // Convert lowercase inputs to uppercase safely
        if (user_answer >= 'a' && user_answer <= 'z') {
            user_answer = user_answer - 32;
        }

        if (user_answer == correct_answers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Incorrect! Correct option was " << correct_answers[i] << ".\n\n";
        }
    }

    cout << "-------------------------------------\n";
    cout << "Quiz finalized! Total Score: " << score << "/3\n";

    return 0;
}