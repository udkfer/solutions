#include <iostream>
#include <bitset>

int main()
{
  int t{};
  std::cin >> t;

  int n{};

  int s{1};
  while(s <= t)
  {
    std::cin >> n;

    std::bitset<32> bits(n);
    int r = bits.count();

    int q = (1 << r) - 1;

    std::cout << q << '\n';

    ++s;
  }

  return 0;
}
