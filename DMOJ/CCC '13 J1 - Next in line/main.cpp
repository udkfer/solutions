#include <iostream>

int main()
{
  int y{}, m{};
  std::cin >> y >> m;

  int o = m + (m - y);
  std::cout << o << '\n';

  return 0;
}
