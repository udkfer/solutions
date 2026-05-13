#include <iostream>
#include <cmath>

int main()
{
  int i{};
  std::cin >> i;

  std::cout << "The largest square has side length " << int(sqrt(i)) << ".\n";

  return 0;
}
