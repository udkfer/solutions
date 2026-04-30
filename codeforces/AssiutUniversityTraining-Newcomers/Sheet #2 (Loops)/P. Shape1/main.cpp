#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m = n;
  while(m > 0)
  {
    int l = m;

    while(l > 0)
    {
      --l;

      char r = '*';
      std::cout << r;
    }

    std::cout << '\n';

    --m;
  }

  return 0;
}
