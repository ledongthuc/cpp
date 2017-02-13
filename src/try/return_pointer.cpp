#include <iostream>

int* getPointer() {
  int value = 7;
  int *pointer =  &value;
  std::cout << "[Normal] In scope (address): " << pointer << std::endl;
  std::cout << "[Normal] In scope (value):   " << *pointer << std::endl;
  return pointer;
}

int* getStaticPointer() {
  static int value = 7;
  int *pointer =  &value;
  std::cout << "[Static] In scope (address): " << pointer << std::endl;
  std::cout << "[Static] In scope (value):   " << *pointer << std::endl;
  return pointer;
}

int* getAllocatingPointer() {
  int *pointer =  new int(7);
  std::cout << "[Allocating] In scope (address): " << pointer << std::endl;
  std::cout << "[Allocating] In scope (value):   " << *pointer << std::endl;
  return pointer;
}

int main() {
  int *pointer = getPointer();
  std::cout << "[Normal] Out of scope (address): " << pointer << std::endl;
  std::cout << "[Normal] Out of scope (value):   " << *pointer << std::endl;

  std::cout << std::endl;

  int *staticPointer = getStaticPointer();
  std::cout << "[Static] Out of scope (address): " << staticPointer << std::endl;
  std::cout << "[Static] Out of scope (value):   " << *staticPointer << std::endl;

  std::cout << std::endl;

  int *allocatingPointer = getAllocatingPointer();
  std::cout << "[Static] Out of scope (address): " << allocatingPointer << std::endl;
  std::cout << "[Static] Out of scope (value):   " << *allocatingPointer << std::endl;
  delete allocatingPointer;
  allocatingPointer = 0;
}
