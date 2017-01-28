#include <algorithm>
#include <iostream>

void printArray(int* array, int length) {
  for(int index = 0; index < length; index++) {
    std::cout << array[index] << " ";
  }
  std::cout << std::endl;
}

int main() {

  int input[] = { 30, 50, 20, 10, 40 };
  int inputLength = sizeof(input) / sizeof(input[0]);

  printArray(input, inputLength);

  for(int baseIndex = 0; baseIndex < inputLength - 1; baseIndex++) {
    int smallestIndex = baseIndex;

    for(int checkIndex = baseIndex + 1; checkIndex < inputLength; checkIndex++) {
      if(input[smallestIndex] > input[checkIndex]) {
        smallestIndex = checkIndex;
      }
    }

    std::swap(input[baseIndex], input[smallestIndex]);
  }

  printArray(input, inputLength);

  return 0;
}
