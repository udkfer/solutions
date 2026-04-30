#include <iostream>

int main()
{
  long long a {};
  long long b {};
  long long c {};
  long long d {};
  std::cin >> a >> b >> c >> d;

  long long x {(a * b) - (c * d)};
  std::cout << "Difference = " << x << '\n';

  return 0;
}
