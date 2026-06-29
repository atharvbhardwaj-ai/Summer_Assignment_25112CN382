#include<iostream>
#include<string>
using namespace std;

const int MAX = 50;

int main() {
    string studentNames[MAX];
    int testScores[MAX];
    int totalStudents = 0;
    int choice;

    while (true) {
        cout << "\n--- STUDENT PERFORMANCE TRACKER ---\n";
        cout << "1. Add Student Records\n";
        cout << "2. Display All Student Grades\n";
        cout << "3. Calculate Class Average\n";
        cout << "4. Exit System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4) {
            cout << "Exiting system. Data cleared.\n";
            break;
        }
        else if (choice == 1) {
            cout << "How many students do you want to add? ";
            int incoming;
            cin >> incoming;

            // Simple boundary validation check
            if (totalStudents + incoming > MAX) {
                cout << "Error: System cannot exceed maximum capacity of 50 students.\n";
            } else {
                for (int i = 0; i < incoming; i++) {
                    cout << "Enter name for student " << (totalStudents + 1) << ": ";
                    cin >> studentNames[totalStudents]; // Simple cin without string spaces to avoid buffer issues
                    
                    cout << "Enter exam score (0-100) for " << studentNames[totalStudents] << ": ";
                    cin >> testScores[totalStudents];
                    
                    totalStudents++; // Move to next available array slot
                }
                cout << "Records successfully updated!\n";
            }
        }
        else if (choice == 2) {
            if (totalStudents == 0) {
                cout << "No student records found in the system database.\n";
            } else {
                cout << "\n--- Student Roster & Grades ---\n";
                for (int i = 0; i < totalStudents; i++) {
                    string grade;
                    if (testScores[i] >= 90) grade = "A";
                    else if (testScores[i] >= 75) grade = "B";
                    else if (testScores[i] >= 50) grade = "C";
                    else grade = "Fail";

                    cout << "Name: " << studentNames[i] << " | Score: " << testScores[i] << "/100 | Grade: " << grade << "\n";
                }
            }
        }
        else if (choice == 3) {
            if (totalStudents == 0) {
                cout << "Cannot compute average of 0 records.\n";
            } else {
                int scoreSum = 0;
                for (int i = 0; i < totalStudents; i++) {
                    scoreSum += testScores[i];
                }
                double classAverage = (double)scoreSum / totalStudents;
                cout << "Total Class Size: " << totalStudents << " students.\n";
                cout << "Overall Class Performance Average: " << classAverage << "%\n";
            }
        }
        else {
            cout << "Invalid menu selection. Please try again.\n";
        }
    }
    return 0;
}