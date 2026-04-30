#include <iostream>

int main()
{
  int a{};
  int b{};
  std::cin >> a >> b;

  if (a >= b)
  {
    std::cout << "Yes" << '\n';
  }
  else
  {
    std::cout << "No" << '\n';
  }

  return 0;
}
