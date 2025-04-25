/*
Write a program that:

    Takes the user's test score as input.
    Determines the letter grade using the following scale:
        90-100: A
        80-89: B
        70-79: C
        60-69: D
        Below 60: F
    Outputs the letter grade.
*/

#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;
    string feedback;

    // Get test score from user
    cout << "Enter your test score (0-100): ";
    cin >> score;

    // Input validation
    if (score < 0 || score > 100) {
        cout << "Invalid score! Please enter a score between 0 and 100." << endl;
        return 1;  // Return with error code
    }

    // Determine grade
    if (score >= 90) {
        grade = 'A';
        feedback = "Excellent work!";
    } else if (score >= 80) {
        grade = 'B';
        feedback = "Good job!";
    } else if (score >= 70) {
        grade = 'C';
        feedback = "Satisfactory performance.";
    } else if (score >= 60) {
        grade = 'D';
        feedback = "Needs improvement.";
    } else {
        grade = 'F';
        feedback = "Please seek help and try again.";
    }

    // Add plus/minus modifiers for more detailed grading
    char modifier = '\0';  // Null character (no modifier)
    if (grade != 'F') {
        int lastDigit = score % 10;
        if (lastDigit >= 7 && grade != 'A') {
            modifier = '+';
        } else if (lastDigit <= 2 && grade != 'F') {
            modifier = '-';
        }
    }

    // Display results
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade;
    if (modifier != '\0') {
        cout << modifier;
    }
    cout << endl;
    cout << "Feedback: " << feedback << endl;

    // Additional advice based on grade
    switch (grade) {
        case 'A':
            cout << "Keep up the excellent work!" << endl;
            break;
        case 'B':
            cout << "Focus on improving a few key areas." << endl;
            break;
        case 'C':
            cout << "Consider additional study time." << endl;
            break;
        case 'D':
        case 'F':
            cout << "Please schedule a meeting with your instructor." << endl;
            break;
    }

    return 0;
}