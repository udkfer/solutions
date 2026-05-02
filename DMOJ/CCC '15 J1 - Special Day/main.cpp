#include <iostream>

int main()
{
  int a{}, b{};
  std::cin >> a >> b;

  if(a == 2)
  {
    if(b == 18)
      std::cout << "Special\n";
    else if(b > 18)
      std::cout << "After\n";
    else
      std::cout << "Before\n";
  }
  else if(a > 2)
    std::cout << "After\n";
  else
    std::cout << "Before\n";

  return 0;
}
