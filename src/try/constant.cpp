#include <iostream>

void call() {
  const int a = 5;
  constexpr int b = 5;

  std::cout << "Enter a number: ";
  int age;
  std::cin >> age;
  const int c = age;
  // constexpr int d = age;
}

int main() {
  const int a = 5;
  constexpr int b = 5;

  std::cout << "Enter a number: ";
  int age;
  std::cin >> age;
  const int c = age;
  //constexpr int d = age;

  call();
  return 0;
}
