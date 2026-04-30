#include <iostream>

int main()
{
  int k{}, s{};
  std::cin >> k >> s;

  int r = 0;
  int x = 0;

  while (x <= k) {
    int y = 0;
    while (y <= k) {
      int z = s - x - y;

      if(z >= 0 && z <= k)
      {
        r++;
      }

      y++;
    }
    x++;
  }

  std::cout << r << '\n';

  return 0;
}
