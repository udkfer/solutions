#include <iostream>
#include <cmath>

int main()
{
  double n{};
  std::cin >> n;

  double i;
  double f;
  f = modf(n, &i);

  if(f > 0.0)
  {
    std::cout << "float " << i << ' ' << f << '\n';
  }
  else
  {
    std::cout << "int " << i << '\n';
  }

  return 0;

}
