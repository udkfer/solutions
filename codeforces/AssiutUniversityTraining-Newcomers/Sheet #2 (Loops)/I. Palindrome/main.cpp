#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int r{};
  int t = n;

  while (t != 0) {
    r = (r * 10) + (t % 10);
    t = t / 10;
  }

  std::cout << r << '\n';

  if (n == r) {
    std::cout << "YES\n";
  }
  else {
    std::cout << "NO\n";
  }

  return 0;
}
