/*
    Requirements:

    Create variables of different types: integer, float, double, character, and string
    Use printf() to display these variables with different format specifiers
    Demonstrate width, precision, alignment, and various number formats
    Include comments explaining each format specifier used
*/

/*

    Example Output:

    Format Specifier Practice
    ------------------------

    Integer formats:
    Decimal: 42
    Hexadecimal: 0x2a
    Octal: 052
    With width (5): |   42|
    Left-aligned:   |42   |

    Float formats:
    Default: 3.141593
    With precision (2): 3.14
    Scientific: 3.141593e+00
    Fixed with precision (4): 3.1416

    Character and String formats:
    Character: X
    String: Hello, World!
    String with width (20): |       Hello, World!|

*/

/*

    Hint: Refer to format specifiers like %d, %x, %f, %e, %c, %s, and modifiers like width and precision.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Sample variables to display
    int integer_value = 42;
    float float_value = 3.14159265f;
    double double_value = 3.14159265;
    char char_value = 'X';
    const char* string_value = "Hello, World!";

    printf("Format Specifier Practice\n");
    printf("------------------------\n\n");

    // Your code here - use printf with different format specifiers
    printf("Integer aligned to the right: [%010d]\n", integer_value);
    printf("Pi (float) to the thousandth place: %.3f\n", float_value);
    printf("Pi (double) to the ten-tousandth place: %.4f\n", double_value);
    printf("The \"X\" character in hexadecimal: %X\n", char_value);
    printf("Seven characters: %.7s\n", string_value);
    return 0;
}
