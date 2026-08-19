#include <iostream>

int main()
{
  int x{}, m{};
  std::cin >> x >> m;


  for (int n = 1; n < m; ++n)
  {

    if((x * n) % m == 1)
    {
      std::cout << n << '\n';
      return 0;
    }
  }

  std::cout << "No such integer exists.\n";

  return 0;
}
