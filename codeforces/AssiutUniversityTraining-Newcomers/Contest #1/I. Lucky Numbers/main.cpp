#include <iostream>

int main()
{
  short n{};
  std::cin >> n;

  if(((n % 10) % ((n / 10) % 10) == 0) || (((n / 10) % 10) % ((n % 10)) == 0))
    std::cout << "YES\n";
  else
    std::cout << "NO\n";

  return 0;
}
