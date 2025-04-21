#include <iostream>
#include <string>
using namespace std;
// main: requests the users name and ages and then responds with a simple welcome message.
int main () {
  string name;
  int age;

  cout << "Enter your full name: ";
  getline(cin, name);

  cout << "Enter your age: ";
  cin >> age;

  cout << "Hello, " << name << "! ";
  cout << "You are " << age << " years old." << endl;

  return 0;
}