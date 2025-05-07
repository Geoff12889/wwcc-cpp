/*

Coding Assignment: Distance Calculator

Create a program that calculates the distance between two points in a 2D plane using the distance formula:

distance = √[(x₂ - x₁)² + (y₂ - y₁)²]

Instructions:

    Create a new C++ file named assignment0-distance_calculator.cpp
    Declare a function named calculateDistance that:
        Takes four parameters: x1, y1, x2, y2 (all doubles)
        Returns a double representing the calculated distance
    In main(), prompt the user to enter the coordinates of two points
    Call your function with these coordinates and display the distance
    Format the output to show exactly 2 decimal places

Acceptance Criteria:

    Use sqrt() from the <cmath> library to calculate the square root
    Include appropriate comments explaining your code
    Validate that your function works by testing with points where you know the answer:
        Points (0,0) and (3,4) should give distance 5.0
        Points (-2,1) and (2,5) should give distance 5.66
    Label output as displayed below in the example -> x1: # y1: # ...

    Bonus Challenge:

    Add a second function called calculateMidpoint that:

    Takes the same four parameters as calculateDistance
    Returns the midpoint of the two points as a pair of values
    The midpoint is calculated as: ((x₁+x₂)/2, (y₁+y₂)/2)

    Modify your main program to also display the midpoint of the two points.

*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double calculateDistance (double x1, double y1, double x2, double y2);
double calculateMidpoint (double v1, double v2);

int main ()
{
    double x1, y1, x2, y2;
    cout << "Enter coordinates of the first point:" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "Enter coordinates of the second point:" << endl;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    double answer = calculateDistance(x1, y1, x2, y2);
    printf("The distance between (%i,%i) and (%i,%i) is: %.2f\n", (int) x1, (int) y1, (int) x2, (int) y2, answer);
    printf("The midpoint between (%i,%i) and (%i,%i) is: (%.2f,%.2f)\n", (int) x1, (int) y1, (int) x2, (int) y2, calculateMidpoint(x1, x2), calculateMidpoint(y1, y2));
    return 0;
}

double calculateDistance (double x1, double y1, double x2, double y2)
{
    double value;
    // distance = √[(x₂ - x₁)² + (y₂ - y₁)²]
    value = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return value;
}

double calculateMidpoint (double v1, double v2)
{
    double midpoint;
    midpoint = (v1 + v2) / 2;
    // midpoint is calculated as: ((x₁+x₂)/2, (y₁+y₂)/2)
    return midpoint;
}