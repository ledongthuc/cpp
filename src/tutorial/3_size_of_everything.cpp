// Or I think they are everything :)) haha, ofcouse, just that I want to check
#include <iostream>

using namespace std;

int main() {
  bool boolean;
  char char1;
  wchar_t wchar;
  char16_t char16;
  char32_t char32;
  short short1;
  int integer;
  long long1;
  long long longLong;
  float float1;
  double double1;
  long double longDouble;

  cout << "Size of boolean: "     << sizeof(boolean   ) << std::endl;
  cout << "Size of char: "        << sizeof(char1     ) << std::endl;
  cout << "Size of wchar_t: "     << sizeof(wchar     ) << std::endl;
  cout << "Size of char16: "      << sizeof(char16    ) << std::endl;
  cout << "Size of char32: "      << sizeof(char32    ) << std::endl;
  cout << "Size of short: "       << sizeof(short1    ) << std::endl;
  cout << "Size of int: "         << sizeof(integer   ) << std::endl;
  cout << "Size of long: "        << sizeof(long1     ) << std::endl;
  cout << "Size of long long: "   << sizeof(longLong  ) << std::endl;
  cout << "Size of float: "       << sizeof(float1    ) << std::endl;
  cout << "Size of double: "      << sizeof(double1   ) << std::endl;
  cout << "Size of long double: " << sizeof(longDouble) << std::endl;

  return 0;
}
