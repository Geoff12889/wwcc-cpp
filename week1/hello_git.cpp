#include <iostream>
using namespace std;
// main: generate some simple output
int main () {
  string fullName;
  cout << "Enter your full name: ";
  getline(cin, fullName);
  cout << "Hello, " << fullName << "!" << endl;
  return 0;
}
