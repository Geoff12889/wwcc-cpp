/*

Assignment 1: Coin Flip Simulator

Objective: Create a program that simulates flipping a coin multiple times and reports the results.

Requirements:

    Ask the user how many times they want to flip the coin
    Simulate flipping a coin that many times using random numbers
    Count and display the number of heads and tails
    Calculate and display the percentage of each outcome

Example Output:

Coin Flip Simulator
How many flips would you like to simulate? 100
Simulating 100 coin flips...

Results:
Heads: 48 (48.00%)
Tails: 52 (52.00%)

*/

#include <iostream>
#include <cstdlib>  // For rand() function
#include <ctime>    // For time() function
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    int flips;
    int heads = 0;
    int tails = 0;
    int i = 0;

    cout << "Coin Flip Simulator" << endl;
    cout << "How many flips would you like to simulate? ";
    cin >> flips;

    // Your code here
    std::cout << endl << "Simulating " << flips << " coin flips..." << endl;

    while (i < flips) {
        int headsOrTails = rand() % 2;
        if (headsOrTails == 0) {
          tails++;
        } else if (headsOrTails == 1) {
          heads++;
        } else {
          std::cout << "Something unexpected happened" << endl;
          return 0;
        }
        i++;
    }
    
    float percHeads = (float)heads / (float)flips * 100.00;
    float percTails = (float)tails / (float)flips * 100.00;

    std::cout << "Results:" << endl;
    std::cout << "Heads: " << heads << " (" << percHeads << "%)" << endl;
    std::cout << "Tails: " << tails << " (" << percTails << "%)" << endl;

    return 0;
}