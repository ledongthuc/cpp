#include <iostream>

using namespace std;

void meetCounting() {
  int number = 1;
  std::cout << "I say hello " << number << " times" << std::endl;
  number++;
}

void handshakeCounting() {
  static int number = 2;
  std::cout << "I handshake " << number << " times" << std::endl;
  number += 2;
}

void goodbyeCounting() {
  static int number = 1;
  std::cout << "I goodbye " << number << " times" << std::endl;
  number++;
}

int main() {
  meetCounting();
  handshakeCounting();
  goodbyeCounting();

  meetCounting();
  handshakeCounting();
  goodbyeCounting();

  meetCounting();
  handshakeCounting();
  goodbyeCounting();

  return 0;
}
