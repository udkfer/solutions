#include <iostream>
#include <iomanip>

int main()
{
  float x{};
  long double p{};
  std::cin >> x >> p;

 long double o{p / ((100 - x) / 100)};
 std::cout << std::fixed << std::setprecision(2);
 std::cout << o << '\n';

  return 0;
}
