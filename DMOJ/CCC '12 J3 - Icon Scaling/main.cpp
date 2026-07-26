#include <iostream>
#include <string>

int main()
{
  int n{};
  std::cin >> n;

  std::string k{};

  for(int i{}; i < n; ++i)
  {
    k = std::string(n, '*') + std::string(n, 'x') + std::string(n, '*');
    std::cout << k << '\n';
  }

  for(int i{}; i < n; ++i)
  {
    k = std::string(n, ' ') + std::string(n, 'x') + std::string(n, 'x');
    std::cout << k << '\n';
  }

  for(int i{}; i < n; ++i)
  {
    k = std::string(n, '*') + std::string(n, ' ') + std::string(n, '*');
    std::cout << k << '\n';
  }

  return 0;
}
