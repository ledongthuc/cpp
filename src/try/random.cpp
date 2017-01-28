#include <iostream>
#include <cstdlib>

int main()
{
  unsigned int seed = static_cast<unsigned int>(time(0));
  srand(seed);

  for(int count = 0; count < 100; count++) 
  {
    std::cout << rand() << "\t\t";

    if ((count+1) % 4 ==0)
    {
      std::cout << std::endl;
    }
  }
}
