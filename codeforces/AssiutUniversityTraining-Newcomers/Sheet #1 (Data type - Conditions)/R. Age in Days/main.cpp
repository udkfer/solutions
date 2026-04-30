#include <iostream>

int main()
{
  int n{0};
  std::cin >> n;

  int y{0};
  int m{0};

  if(n >= 365)
  {
    y = n / 365;
    n = n % 365;
  }

  if(n >= 30)
  {
    m = n / 30;
    n = n % 30;
  }

  std::cout << y << " years" << '\n';
  std::cout << m << " months" << '\n';
  std::cout << n << " days" << '\n';

  return 0;
}
