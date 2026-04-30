#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m{};
  while (m < n)
  {
    std::cout << ++m << '\n';
  }

}
