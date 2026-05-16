#include <iostream>

int main()
{
  int r{}, h{};
  std::cin >> r >> h;

  const double pi = 3.141592653589793;
  double v = ((pi * (r * r) * h)/3);
  std::cout << v << '\n';

  return 0;
}
