#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m{};
  while(m < 12)
  {
    ++m;
    std::cout << n << " * " << m << " = " << n * m << '\n';
  }

  return 0;
}
