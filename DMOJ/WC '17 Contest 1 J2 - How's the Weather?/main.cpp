#include <iostream>

int main()
{
  int c{};
  std::cin >> c;

  int f = (((c * 9) / 5) + 32);
  std::cout << f << '\n';

  return 0;
}
