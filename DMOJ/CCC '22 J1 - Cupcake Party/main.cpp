#include <iostream>

int main()
{
  int r{}, s{};
  std::cin >> r >> s;

  int boxable_cupcake = (r * 8) + (s * 3);
  int leftover = boxable_cupcake - 28;

  std::cout << leftover << '\n';

  return 0;
}
