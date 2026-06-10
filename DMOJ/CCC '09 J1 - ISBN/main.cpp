#include <iostream>

int main()
{
  int a{}, b{}, c{};
  std::cin >> a >> b >> c;

  int first_ten = 91;

  int x = first_ten + (a * 1) + (b * 3) + (c * 1);

  std::cout << "The 1-3-sum is " << x << '\n';

  return 0;
}
