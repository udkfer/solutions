#include <iostream>

int main()
{
  long long a{}, b{}, c{}, d{};
  std::cin >> a >> b >> c >> d;

  long long m = {((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100};

  if(m < 10)
    std::cout << 0 << m << "\n";
  else
    std::cout << m << '\n';

  return 0;
}
