#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int ways{};

  for (int i{}; 5 * i <= n; ++i) {
    int remaining = n - 5 * i;
    if (remaining % 4 == 0) {
      ++ways;
    }
  }

  std::cout << ways << '\n';

  return 0;
}
