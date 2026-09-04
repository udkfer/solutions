#include <iostream>

int main()
{
  int j{};
  std::cin >> j;

  int combinations{};

  for (int a = 1; a < j - 2; ++a)
    for (int b = a + 1; b < j - 1; ++b)
      for (int c = b + 1; c < j; ++c)
        combinations++;

  std::cout << combinations << '\n';

  return 0;
}
