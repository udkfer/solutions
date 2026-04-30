#include <iostream>
#include <cmath>

int main()
{
  long double a{};
  long double b{};
  std::cin >> a >> b;

  long double x = a / b;

  std::cout << "floor " << a << " / " << b << " = " << std::floor(x) << '\n';
  std::cout << "ceil " << a << " / " << b << " = " << std::ceil(x) << '\n';
  std::cout << "round " << a << " / " << b << " = " << std::round(x) << '\n';

  return 0;
}
