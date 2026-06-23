#include <iostream>

int main()
{
  int uc{}, um{}, k{};
  std::cin >> uc >> um >> k;

  int minmax = std::max(uc, um);
  int max_joy = minmax * k;

  std::cout << max_joy << '\n';

  return 0;
}
