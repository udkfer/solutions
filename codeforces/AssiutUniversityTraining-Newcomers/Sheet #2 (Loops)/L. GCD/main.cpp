#include <iostream>

int main()
{
  int a{}, b{};
  std::cin >> a >> b;

  int l{};
  int k{};
  while((l < a) || (l < b))
  {
    ++l;

    if (((a % l) == 0) && ((b % l) == 0))
      k = l;
  }

  std::cout << k << '\n';

  return 0;
}
