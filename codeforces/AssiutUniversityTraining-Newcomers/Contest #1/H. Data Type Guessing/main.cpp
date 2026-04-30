#include <iostream>
#include <climits>
#include <cmath>

int main()
{
  long double n{}, k{}, a{};
  std::cin >> n >> k >> a;

  long double t{};
  t = ((n * k) / a);

  if(std::floor(t) != t)
    std::cout << "double\n";
  else if((t >= INT_MIN) && (t <= INT_MAX))
    std::cout << "int\n";
  else if((t < INT_MIN) || (t > INT_MAX))
    std::cout << "long long\n";

  return 0;
}
