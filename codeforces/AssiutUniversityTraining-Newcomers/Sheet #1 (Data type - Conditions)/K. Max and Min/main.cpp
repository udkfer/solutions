#include <iostream>

int main()
{
  long long a{};
  long long b{};
  long long c{};
  std::cin >> a >> b >> c;

  if((a <= b) && (a <= c))
  {
    std::cout << a;
  }
  else if((b <= a) && (b <= c))
  {
    std::cout << b;
  }
  else if((c <= a) && (c <= b))
  {
    std::cout << c; 
  }

  std::cout << " ";

  if((a >= b) && (a >= c))
  {
    std::cout << a;
  }
  else if((b >= a) && (b >= c))
  {
    std::cout << b;
  }
  else if((c >= a) && (c >= b))
  {
    std::cout << c; 
  }

  std::cout << '\n';

  return 0;
}
