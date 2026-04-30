#include <iostream>

int main()
{
  char s{};
  int n{}, x{};
  std::cin >> s >> n;

  int m{};
  while(m < n)
  {
    ++m;
    std::cin >> x;

    int l = x;
    while(l > 0)
    {
      --l;

      char r{};
      switch(s)
      {
        case '+':
          r = '+';
          std::cout << r;
          break;
        case '-':
          r = '-';
          std::cout << r;
          break;
        case '*':
          r = '*';
          std::cout << r;
          break;
        case '/':
          r = '/';
          std::cout << r;
          break;
      }
    }
    std::cout << '\n';

  }

  return 0;
}
