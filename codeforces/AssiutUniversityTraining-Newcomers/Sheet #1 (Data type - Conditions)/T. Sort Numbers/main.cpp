#include <iostream>

void sort(long long a, long long b, long long c)
{
  if(a <= b && a <= c && b <= c)
  std::cout << a << '\n' << b << '\n' << c << '\n';

  else if(a <= b && a <= c && c <= b)
  std::cout << a << '\n' << c << '\n' << b << '\n';

  else if(b <= a && b <= c && a <= c)
  std::cout << b << '\n' << a << '\n' << c << '\n';

  else if(b <= a && b <= c && c <= a)
  std::cout << b << '\n' << c << '\n' << a << '\n';

  else if(c <= a && c <= b && a <= b)
  std::cout << c << '\n' << a << '\n' << b << '\n';

  else if(c <= a && c <= b && b <= a)
  std::cout << c << '\n' << b << '\n' << a << '\n';
}

int main()
{
  long long a{};
  long long b{};
  long long c{};
  std::cin >> a >> b >> c;

  sort(a,b,c);

  std::cout << '\n' << a << '\n' << b << '\n' << c << '\n';

  return 0;
}
