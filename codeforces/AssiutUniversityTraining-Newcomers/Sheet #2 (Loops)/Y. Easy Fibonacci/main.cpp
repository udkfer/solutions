#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int a{};
  int b{1};

  int m{1};
  while(m <= n)
  {
    int c = a;
    a = a + b;
    b = c;

    std::cout << b << ' ';

    ++m;
  }
  std::cout << '\n';

  return 0;
}
