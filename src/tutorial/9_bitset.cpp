#include <iostream>
#include <bitset>

using namespace std;

int main()
{
  std::bitset<8> bits(0x2);
  bits.set(4);
  std::cout << "Test flag(4): " << bits.test(4) << std::endl;
  std::cout << "Test flag(5): " << bits.test(5) << std::endl;
  std::cout << "Test flag: " << bits.to_string() << std::endl;
  std::cout << endl;

  bits.set(5);
  std::cout << "Test flag(4): " << bits.test(4) << std::endl;
  std::cout << "Test flag(5): " << bits.test(5) << std::endl;
  std::cout << "Test flag: " << bits.to_string() << std::endl;
  std::cout << endl;

  bits.reset();
  std::cout << "Test flag(4): " << bits.test(4) << std::endl;
  std::cout << "Test flag(5): " << bits.test(5) << std::endl;
  std::cout << "Test flag: " << bits.to_string() << std::endl;
  std::cout << endl;

}
