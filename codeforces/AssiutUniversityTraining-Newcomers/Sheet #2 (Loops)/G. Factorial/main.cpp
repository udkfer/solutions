#include <iostream>

int main()
{
  int t{};
  std::cin >> t;

  int n{};

  int s{};
  while(s < t)
  {
    ++s;
    std::cin >> n;

    long long l{1};
    int m{};
    while(m < n)
    {
      ++m;
      l = m * l;
    }

    std::cout << l << std::endl;

  }

  return 0;
}
