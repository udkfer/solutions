#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
  double r{};
  std::cin >> r;

  r = pow(r, 2);

  std::cout << std::fixed << std::setprecision(9) << 3.141592653 * r << '\n';

  return 0;
}
