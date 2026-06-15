#include <iostream>

int main()
{
  int b{};
  std::cin >> b;

  int p = (5 * b) - 400;

  std::cout << p << '\n';
  if(p > 100)
    std::cout << "-1\n";
  else if(p == 100)
    std::cout << "0\n";
  else if(p < 100)
    std::cout << "1\n";

  return 0;
}
