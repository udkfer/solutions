#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int wins{};
  for(int i{}; i < n; ++i)
  {
    int m{}, o{};
    std::cin >> m >> o;

    if(m > o)
      ++wins;
  }

  std::cout << wins << '\n';

  return 0;
}
