/*

Assignment 3: Multiplication Table Generator

Objective: Create a program that generates a customized multiplication table using nested loops.

Requirements:

    Ask the user for a starting number and an ending number
    Check that the starting number is less than the ending number
    Generate a multiplication table from the starting number to the ending number
    Format the table neatly with properly aligned columns
    Include row and column headers showing the numbers being multiplied

    Hint: Use setw() to set a fixed width for each column to ensure proper alignment.

*/

#include <iostream>
#include <string>
#include <iomanip>  // For setw function
using namespace std;

int main() {
    int start, end;

    cout << endl;
    cout << "Multiplication Table Generator" << endl << endl;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    // Validate input
    if (start > end) {
        cout << "Error: Starting number must be less than ending number." << endl;
        return 1;
    } else if (start > 100 || start < 1 || end > 100 || end < 1) {
        cout << "Error: Enter a different value." << endl;
        return 2;
    }

    cout << endl;

    // Your code here
    int width = 4;
    for (int i = start; i <= end + 2; i++)
    {
        for (int j = start; j <= end + 1; j++)
        {
            cout << setw(width);
            if (j == start && i == start)
            {
                // printf("   | %i |", j);
                if (j < 10) {
                    cout << "     |   " << j << " |";
                } else {
                    cout << "     |  " << j << " |";
                }
            } else if (i == start && j != end + 1)
            {
                // printf(" %i |", j);
                cout << j << " |";
            } else if (i == start && j == end + 1) {
                break;
            } else if (i == start + 1) {
                // printf("---|");
                cout << "-----|";
            } else if (j == start)
            {
                // printf(" %i |", i - 2);
                cout << i - 2 << " |";
            } else {
                // printf(" %i |", (i - 2) * (j - 1));
                cout << (i-2) * (j-1) << " |";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}