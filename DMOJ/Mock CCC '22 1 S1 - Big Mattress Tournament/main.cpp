#include <iostream>

int main()
{
  int t{};
  std::cin >> t;

  for(int i{}; i < t; ++i)
  {
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    int remaining = a - c;
    if((a < c) || (remaining % 2 != 0) || (a == 0 && c == 0 && b % 2 != 0))
      std::cout << "NO\n";
    else
      std::cout << "YES\n";
  }

  return 0;
}
