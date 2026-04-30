#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int l{};
  while(l < n)
  {
    ++l;

    int m{};
    for (int i = 1; i <= l; i++)
    {
      if (l % i == 0)
      {
        m++;
      }
    }

    if (m == 2)
      std::cout << l << ' ';

  }
  std::cout << '\n';

  return 0;
}
