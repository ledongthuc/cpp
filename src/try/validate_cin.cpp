#include <iostream>

int main()
{
startApp:
  std::cout << "Please input your favourite integer: ";
  int favoritedInteger;
  std::cin >> favoritedInteger;
  if (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(32767,'\n');
    std::cout << "Your number is correct. ";
    goto startApp;
  }

  std::cout << "Thank you, we got " << favoritedInteger << " from you." << std::endl;
  return 0;
}
