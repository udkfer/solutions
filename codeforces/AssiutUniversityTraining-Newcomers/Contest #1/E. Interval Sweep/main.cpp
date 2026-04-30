#include <iostream>

int main()
{
  int a{}, b{};
  std::cin >> a >> b;

  if(((a - b) <= 1 && ((b - a) <= 1)) && ((a + b) > 0))
  {
    std::cout << "YES\n";
  }
  else
    std::cout << "NO\n";

  return 0;
}
