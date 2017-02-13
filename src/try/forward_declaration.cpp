#include <iostream>

using namespace std;

int add(int x, int y);

int main()
{
  std::cout << "add(10, 20): " << add(10, 20) << std::endl;
}

int add(int x, int y)
{
  return x + y;
}
