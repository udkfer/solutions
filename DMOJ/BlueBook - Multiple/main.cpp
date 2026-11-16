#include <iostream>

int main()
{
  int a{}, b{};
  std::cin >> a >> b;

  if(a % b == 0)
    std::cout << "yes\n";
  else
    std::cout << "no\n";

  return 0;
}
