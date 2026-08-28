#include <iostream>
#include <string>

int main()
{
  int t{}, s{}, h{};
  std::cin >> t >> s >> h;

  for (int i{}; i < t; ++i) {
    std::cout << '*' << std::string(s, ' ') << '*' << std::string(s, ' ') << '*' << '\n';
  }

  std::cout << std::string(2*s + 3, '*') << '\n';

  for (int i{}; i < h; ++i) {
    std::cout << std::string(s + 1, ' ') << '*' << '\n';
  }

  return 0;
}
