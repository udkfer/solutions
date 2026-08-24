#include <iostream>
#include <cstdlib>

int main()
{
  int a{}, b{}, c{}, d{}, t{};
  std::cin >> a >> b >> c >> d >> t;

  int dist = abs(a - c) + abs(b - d);

  if (t >= dist && (t - dist) % 2 == 0)
    std::cout << "Y\n";
  else
    std::cout << "N\n";

  return 0;
}
