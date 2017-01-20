#include <iostream>

using namespace std;

int main()
{
  unsigned short number = 65535; // Max number
  std::cout << "The number is:     " << number << std::endl;

  number = number + 1;
  std::cout << "The number + 1 is: " << number << std::endl;

  number = number + 1;
  std::cout << "The number + 2 is: " << number << std::endl;

  number = number + 1;
  std::cout << "The number + 3 is: " << number << std::endl;
}
