#include <iostream>

using namespace std;

int main() {
  int a = 10;

  cout << "(1+1):    " << (1+1)    << std::endl;
  cout << "(1-2):    " << (1-2)    << std::endl;
  cout << "(5*2):    " << (5*2)    << std::endl;
  cout << "(6/2):    " << (6/2)    << std::endl;
  cout << "(7/2):    " << (7/2)    << std::endl; // Ahihi
  cout << "(7.0/2):  " << (7.0/2)  << std::endl;
  cout << "(7/2.0):  " << (7/2.0)  << std::endl;
  cout << "(7%2):  "   << (7%2)    << std::endl;
  cout << "(10==10): " << (10==10) << std::endl;
  cout << "(10==9):  " << (10==9)  << std::endl;
  cout << "(10>9):   " << (10>9)   << std::endl;
  cout << "(10<9):   " << (10<9)   << std::endl;
  cout << "(10!=9):  " << (10!=9)  << std::endl;
  cout << "(10!=10): " << (10!=10) << std::endl;
  cout << "(10!=9):  " << (10!=9)  << std::endl;
  cout << "a = 10; a++:  "          << a++ << std::endl;
  cout << "a = 11; ++a:  "          << ++a << std::endl;
  cout << "5<<1: "          << (5<<1) << std::endl;
  cout << "24>>1: "          << (24>>1) << std::endl;
  cout << "~17: "          << (~17) << std::endl;
  cout << "6&3: "          << (6&3) << std::endl;
  cout << "6|3: "          << (6|3) << std::endl;
  cout << "6^3: "          << (6^3) << std::endl;

  return 0;
}
