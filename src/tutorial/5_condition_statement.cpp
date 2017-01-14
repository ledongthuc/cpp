#include <iostream>

using namespace std;

int main() {
  cout << "Input a number: ";

  int input;
  cin >> input;
  if (input == 0) {
    cout << "The zero" << std::endl;
  } else if (input % 2 == 0) {
    cout << "The even" << std::endl;
  } else {
    cout << "The Odd" << std::endl;
  }

  return 0;
}
