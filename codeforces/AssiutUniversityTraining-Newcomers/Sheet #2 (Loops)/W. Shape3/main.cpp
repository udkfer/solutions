#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m{1};
  while(m <= n)
  {
    int l = n - m;
    int k{};
    while(k < l)
    {
      ++k;
      std::cout << ' ';
    }

    int j = ((2 * m));
    int i{1};
    while(i < j)
    {
      std::cout << '*';
      ++i;
    }

    std::cout << '\n';
    ++m;
  }

  while(m >= 0)
  {
    --m;
    int l = n - m;
    int k{};
    while(k < l)
    {
      ++k;
      std::cout << ' ';
    }

    int j = ((2 * m));
    int i{1};
    while(i < j)
    {
      std::cout << '*';
      ++i;
    }

    std::cout << '\n';
  }

  return 0;
}
