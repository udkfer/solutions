#include <iostream>

int main()
{
  long long x{};
  long long y{};
  std::cin >> x >> y;

  std::cout << x << " + " << y << " = " << x + y << '\n';
  std::cout << x << " * " << y << " = " << x * y << '\n';
  std::cout << x << " - " << y << " = " << x - y << '\n';

  return 0;
}
