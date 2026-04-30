#include <iostream>

int main()
{
  int a{}, b{};
  std::cin >> a >> b;

  int d{};
  int f{};

  int c = (a - 1);
  while(c < b)
  {
    ++c;

    bool g{1};

    int e = c;
    while(e > 0)
    {
      f = e % 10;
      if((f != 4) && (f != 7))
      {
        g = 0;
      }
      e = e / 10;
    }

    if(g)
    {
      ++d;
      std::cout << c << ' ';
    }
  }

  if(d == 0)
    std::cout << "-1\n";

  std::cout << '\n';

  return 0;
}
