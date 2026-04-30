#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int l{};
  while(l < n)
  {
    ++l;

    if ((n % l) == 0)
      std::cout << l << '\n';

  }

  return 0;
}
