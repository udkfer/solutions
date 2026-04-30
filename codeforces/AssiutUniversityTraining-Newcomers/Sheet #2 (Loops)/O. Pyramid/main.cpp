#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m{};
  while(m < n)
  {
    ++m;

    int l = m;

    while(l > 0)
    {
      --l;

      char r = '*';
      std::cout << r;
    }

    std::cout << '\n';
  }

  return 0;
}
