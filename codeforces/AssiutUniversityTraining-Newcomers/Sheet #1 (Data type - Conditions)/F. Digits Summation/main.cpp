#include <iostream>

int main()
{
  long long n{};
  long long m{};
  std::cin >> n >> m;
  std::cout << (n % 10) + (m % 10) << '\n';

  return 0;
}
