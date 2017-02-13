// Build with file_scope_2.cpp
#include <iostream>

extern int defaultVariable;
// constexpr int defaultConstant; // Default constant is Internal file scope
static int staticVariable; // This is used as uninit local file scope variable
// static constexpr int staticConstant; // static contants
extern int externVariable;
extern const int externConstant;

int main() {
  std::cout << "Default variable: " << defaultVariable << std::endl;
  // std::cout << "Default constant: " << defaultConstant << std::endl;
  std::cout << "Default variable: " << staticVariable << std::endl;
  //std::cout << "Default variable: " << staticConstant << std::endl;
  std::cout << "Default variable: " << externVariable << std::endl;
  std::cout << "Default variable: " << externConstant << std::endl;
  return 0;
}
