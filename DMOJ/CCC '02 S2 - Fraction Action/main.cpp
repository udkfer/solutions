#include <iostream>

int gcd(int a, int b)
{
  while(b != 0)
  {
    int t = a % b;
    a = b;
    b = t;
  }
  return a;
}

int main()
{
  int x{}, y{};
  std::cin >> x >> y;

  int g = gcd(x, y);
  x /= g;
  y /= g;

  int whole = x / y;
  int rem = x % y;

  if (rem == 0)
  {
    std::cout << whole << '\n';
  }
  else if (whole == 0)
  {
    std::cout << rem << '/' << y << '\n';
  }
  else
  {
    std::cout << whole << ' ' << rem << '/' << y << '\n';
  }

  return 0;
}
