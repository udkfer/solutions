#include <iostream>
#include <algorithm>

int main()
{
  long long n{};
  std::cin >> n;

  long long not_adjacent = std::max(0LL, (n - 3));

  std::cout << not_adjacent << '\n';
  return 0;
}
