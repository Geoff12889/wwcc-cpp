/*


Objective: Create a simple number guessing game using conditional statements.

Requirements:

    Generate a random number between 1 and 100
    Ask the user to guess the number
    Provide feedback if the guess is too high or too low
    Keep track of how many guesses the user makes
    Continue until the user guesses correctly
    Display a congratulatory message with the number of guesses when the user wins


*/

#include <iostream>
#include <cstdlib>  // For rand() function
#include <ctime>    // For time() function
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Number Guessing Game" << endl << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl << endl;

    // Your code here
    do {
        cout << "Input your guess: ";
        cin >> guess;
        if (guess > 100 || guess < 1) {
            cout << "Invalid guess" << endl;
            return 1;
        } else if (guess > secretNumber) {
            cout << "Your guess is too high" << endl;
        } else if (guess < secretNumber) {
            cout << "Your guess is too low" << endl;
        } else {
            cout << "Correct!" << endl;
            return 0;
        }
    } while ( guess != secretNumber);
}