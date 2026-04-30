#include <iostream>

int main()
{
  char x{};
  std::cin >> x;

  switch(x)
  {
    case 65 ... 90 :
      x = x + 32;
      std::cout << x << '\n';
      break;
    case 97 ... 122 :
      x = x - 32;
      std::cout << x << '\n';
      break;
  }

  return 0;
}
