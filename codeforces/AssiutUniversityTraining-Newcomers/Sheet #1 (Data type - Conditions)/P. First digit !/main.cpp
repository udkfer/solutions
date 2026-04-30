#include <iostream>

int main()
{
  int x{};
  std::cin >> x;

  while( x >= 10)
  {
    x = x / 10;
  }

  switch(x % 2)
  {
    case 0:
      std::cout << "EVEN" << '\n';
    break;
    default:
      std::cout << "ODD" << '\n';
  }

  return 0;
}
