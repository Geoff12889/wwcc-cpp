/*
    Requirements:

    Ask the user for a number n (between 1 and 9)
    Print a pattern where each line contains numbers from 1 to the line number
    Each number should be separated by a space
    The pattern should have n lines
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    int i = 1;
    int pattern = 1;
    std::cout << "Enter a number between 1 and 9: ";
    std::cin >> num;
    std::cout << endl;
    if (num == 9) {
        std::cout << "1" << endl;
        std::cout << "1 2" << endl;
        std::cout << "1 2 3" << endl;
        std::cout << "1 2 3 4" << endl;
        std::cout << "1 2 3 4 5" << endl;
        std::cout << "1 2 3 4 5 6" << endl;
        std::cout << "1 2 3 4 5 6 7" << endl;
        std::cout << "1 2 3 4 5 6 7 8" << endl;
        std::cout << "1 2 3 4 5 6 7 8 9" << endl;
    } else if (num == 8) {
        std::cout << "1" << endl;
        std::cout << "1 2" << endl;
        std::cout << "1 2 3" << endl;
        std::cout << "1 2 3 4" << endl;
        std::cout << "1 2 3 4 5" << endl;
        std::cout << "1 2 3 4 5 6" << endl;
        std::cout << "1 2 3 4 5 6 7" << endl;
        std::cout << "1 2 3 4 5 6 7 8" << endl;    }
    else if (num == 7) {
        std::cout << "1" << endl;
        std::cout << "1 2" << endl;
        std::cout << "1 2 3" << endl;
        std::cout << "1 2 3 4" << endl;
        std::cout << "1 2 3 4 5" << endl;
        std::cout << "1 2 3 4 5 6" << endl;
        std::cout << "1 2 3 4 5 6 7" << endl;
    } else if (num == 6) {
        std::cout << "1" << endl;
        std::cout << "1 2" << endl;
        std::cout << "1 2 3" << endl;
        std::cout << "1 2 3 4" << endl;
        std::cout << "1 2 3 4 5" << endl;
        std::cout << "1 2 3 4 5 6" << endl;
    } else if (num == 5) {
        std::cout << "1" << endl;
        std::cout << "1 2" << endl;
        std::cout << "1 2 3" << endl;
        std::cout << "1 2 3 4" << endl;
        std::cout << "1 2 3 4 5" << endl;
    } else if (num == 4) {
        std::cout << "1" << endl;
        std::cout << "1 2" << endl;
        std::cout << "1 2 3" << endl;
        std::cout << "1 2 3 4" << endl;
    } else if (num == 3) {
        std::cout << "1" << endl;
        std::cout << "1 2" << endl;
        std::cout << "1 2 3" << endl;
    } else if (num == 2) {
        std::cout << "1" << endl;
        std::cout << "1 2" << endl;
    } else if (num == 1) {
        std::cout << "1" << endl;
    } else {
        std::cout << "Invalid entry" << endl;
    }
    return 0;
}
