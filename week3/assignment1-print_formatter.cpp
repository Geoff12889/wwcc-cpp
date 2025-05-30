#include <iostream>

using namespace std;

// Function prototypes
string format(int number);
// string format(double number);
// string format(double number, int precision);
string format(string text);

int main(void)
{
    // Integer formatting
    int integerValue = 1234567;
    cout << "Integer formatting:" << endl;
    cout << "Original: " << integerValue << endl;
    cout << "Formatted: " << format(integerValue) << endl << endl;

    // Double formatting (default precision 2)
    // double doubleValue = 45.6789;
    // cout << "Double formatting (default 2 decimal places):" << endl;
    // cout << "Original: " << doubleValue << endl;
    // cout << "Formatted: " << format(doubleValue) << endl << endl;

    // Double formatting (custom precision)
    // int customPrecision = 0;
    // cout << "Double formatting (custom decimal places):" << endl;
    // cout << "What level of precission? ";
    // cin >> customPrecision;
    // cout << "Original: " << doubleValue << " with precision " << customPrecision << endl;
    // cout << "Formatted: " << format(doubleValue, customPrecision) << endl << endl;

    // String capitalization
    string stringValue = "hello world of c++ programming";
    cout << "String formatting:" << endl;
    cout << "Original: \"" << stringValue << "\"" << endl;
    cout << "Formatted: \"" << format(stringValue) << "\"" << endl << endl;

    return 0;
}

// Formats an integer with commas (e.g., 1234567 -> "1,234,567")
string format(int number) {
    string numberString = to_string(number);
    string result;
    int count = 0;

    // Process digits from end to start, inserting commas every 3 digits
    for (int i = numberString.size() - 1; i >= 0; --i) {
        result.push_back(numberString[i]);
        if (++count == 3 && i != 0) {
            result.push_back(',');
            count = 0;
        }
    }

    // Reverse result to correct order
    reverse(result.begin(), result.end());
    return result;
}

/************************

------Broken------

// Formats a double to 2 decimal places (e.g., 45.6789 -> "45.68")
string format(double number) {
    string result = to_string(number);
    return result << setprecision(2);
}

// Formats a double to specified precision (e.g., format(45.6789, 3) -> "45.679")
string format(double number, int precision) {
    string result = to_string(number);
    return result.setprecision(2);
}

------End broken------

************************/

// Capitalizes the first letter of each word in a string (e.g., "hello world" -> "Hello World")
string format(string passage) {
    string result = passage;
    bool afterSpace = true;

    for (int i = 0; i < result.length(); ++i) {
        if (isspace(result[i])) {
            afterSpace = true;
        } else if (afterSpace == true) {
            result[i] = toupper(result[i]);
            afterSpace = false;
        }
    }

    return result;
}