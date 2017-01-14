#include <iostream>

using namespace std;

int main() {
  cout << "Input a number: ";

  int input;
  cin >> input;
  for(int i=0; i < input; i++) {
    cout << "[for] This is number " << (i+1) << std::endl;
  }

  int y = 0;
  while (y < input) {
    cout << "[while] This is number " << (y+1) << std::endl;
    y++;
  }

  int z = 0;
  do {
    cout << "[do-while] This is number " << (z+1) << std::endl;
    z++;
  } while (z < input);

  return 0;
}
