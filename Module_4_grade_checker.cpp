// module4_grade_checker.cpp
// Module 4: If Statements, Nested If, and Logical Errors Example

#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your exam score (0 - 100): ";
    cin >> score;

    // --- Basic input validation (nested if example) ---
    if (score < 0 || score > 100) {
        cout << "Error: score must be between 0 and 100." << endl;
        return 0; // stop program early if invalid
    }

    char grade;

    // --- If / Else-If Ladder ---
    if (score >= 90) {
        grade = 'A';

        // Nested if example: A-range bonus message
        if (score >= 95) {
            cout << "Amazing! You are in the top of the A range." << endl;
        }
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << "Your letter grade is: " << grade << endl;

    // Extra message using another if
    if (grade == 'F') {
        cout << "You did not pass. Please review the material and try again." << endl;
    } else {
        cout << "Good job! Keep studying and improving." << endl;
    }

    return 0;
}
