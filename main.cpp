#include <iostream>
#include <vector>
#include <bitset>

int main()
{
  int g = 10;

  for(int i = 0; i < 15; i++)
    std::cout << std::bitset<10>(i) << std::endl;

  return 0;
}
