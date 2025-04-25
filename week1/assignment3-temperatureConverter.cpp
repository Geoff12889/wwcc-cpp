#include <iostream>
#include <string>

using namespace std;

int main(){
    /*
    
    Temperature Converter
    Enter temperature value: 100
    Enter unit (C for Celsius, F for Fahrenheit): C
    100°C is equal to 212°F

    ////////////////////////////////////////////////
    Use the formulas:

    F = (C * 9/5) + 32
    C = (F - 32) * 5/9
    
    */

    int temp;
    char originalUnit;
    char convertedUnit;
    int result;

    std::cout << "Temperature Converter" << endl;
    std::cout << "Enter temperature value: ";
    std::cin >> temp;
    std::cout << endl << "Enter unit (C for Celsius, F for Fahrenheit): ";
    std::cin >> originalUnit;
    if (originalUnit == 'F' || originalUnit == 'f') {
        result = temp - 32;
        result = result * 5/9;
        convertedUnit = 'C';
        std::cout << endl << temp << "F is equal to " << result << convertedUnit << endl;
    } else if (originalUnit == 'C' || originalUnit == 'c') {
        result = temp * 9/5;
        result = result + 32;
        convertedUnit = 'F';
        std::cout << endl << temp << "C is equal to " << result << convertedUnit << endl;
    } else {
      std::cout << "That is an invalid entry" << endl;
    }

    return 0;
}
