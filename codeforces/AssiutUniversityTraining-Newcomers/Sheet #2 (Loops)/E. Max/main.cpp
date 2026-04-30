#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m{};

  int l{};
  while(l < n)
  {
    ++l;

    int k{};
    std::cin >> k;

    if(k >= m)
      m = k;
  }

  std::cout << m << '\n';

  return 0;
}
