#include <iostream>

int main()
{
  int x{}, t{}, w{};
  std::cin >> x >> t >> w;

  int max_wpm = w - x;

  std::cout << max_wpm << '\n';

  return 0;
}
