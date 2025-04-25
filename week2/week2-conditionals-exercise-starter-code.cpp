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

    // Get test score from user
    cout << "Enter your test score (0-100): ";
    cin >> score;

    // Determine and display grade
    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if (score >= 80 && score <= 89) {
        cout << "Grade: B" << endl;
    } else if (score >= 70 && score <= 79) {
        cout << "Grade: C" << endl;
    } else if (score >= 60 && score <= 69) {
        cout << "Grade: D" << endl;
    } else if (score >= 0 && score < 60) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score! Please enter a score between 0 and 100." << endl;
    }

    return 0;
}