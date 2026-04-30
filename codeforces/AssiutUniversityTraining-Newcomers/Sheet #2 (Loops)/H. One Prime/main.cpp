#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m{};
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      m++;
    }
  }
  if (m == 2)
  {
    std::cout << "YES" << '\n';
  }
  else
  {
    std::cout << "NO" << '\n';
  }

  return 0;
}
