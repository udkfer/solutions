#include <iostream>

int main()
{
  int n{}, a{}, b{};
  std::cin >> n >> a >> b;

  int s{};

  int m{1};
  while(m <= n)
  {
    int r{};
    int t = m;

    while (t != 0) {
      r = r + (t % 10);
      t = t / 10;
    }

    if((r >= a) && (r <= b))
    {
      s = m + s;
    }
    ++m;
  }

  std::cout << s << '\n';

  return 0;
}
