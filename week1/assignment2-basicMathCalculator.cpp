#include <iostream>
#include <string>
using namespace std;

int main() {
  double num1, num2;

  cout << "Enter the first number:" << endl;

  cin >> num1;

  cout << "Enter the second number:" << endl;

  cin >> num2;

  /*

  Results:
  Sum: 10 + 5 = 15
  Difference: 10 - 5 = 5
  Product: 10 * 5 = 50
  Quotient: 10 / 5 = 2

  */

  double sum = num1 + num2;
  double diff = num1 - num2;
  double prod = num1 * num2;
  double quot = num1 / num2;

  cout << "Results:\nSum: " << num1 << " + " << num2 << " = " << sum << endl;
  cout << "Difference: " << num1 << " - " << num2 << " = " << diff << endl;
  cout << "Product: " << num1 << " * " << num2 << " = " << prod << endl;
  cout << "Quotient: " << num1 << " / " << num2 << " = " << quot << endl;  

  return 0;
}