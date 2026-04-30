#include <iostream>

int main()
{
  int a{}, b{}, c{};
  std::cin >> a >> b >> c;

  if ((a >= b) && (a >= c))
  {
    if(b >= c)
      std::cout << b << '\n';
    else
      std::cout << c << '\n';
  }
  else if ((b >= a) && (b >= c))
  {
    if(a >= c)
      std::cout << a << '\n';
    else
      std::cout << c << '\n';
  }
  else
  {
    if(a >= b)
      std::cout << a << '\n';
    else
      std::cout << b << '\n';
  }

  return 0;
}
