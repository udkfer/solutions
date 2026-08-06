#include <iostream>

int main()
{
  int n{}, m{}, c{};
  std::cin >> n >> m >> c;

  int bars_left = c - (n * m);
  std::cout << bars_left << '\n';

  return 0;
}
