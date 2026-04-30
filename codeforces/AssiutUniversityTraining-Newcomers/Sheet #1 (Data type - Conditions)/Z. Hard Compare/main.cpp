#include <iostream>
#include <cmath>

int main()
{
  long long a{}, b{}, c{}, d{};
  std::cin >> a >> b >> c >> d;

  if(a*log(b)>c*log(d))
  {
    std::cout << "YES\n";
  }
  else
  {
    std::cout << "NO\n";
  }

  return 0;
}
