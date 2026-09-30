#include <iostream>

int main()
{
  int d{};
  std::cin >> d;

  int y{};
  while (std::cin >> y) {

    if (y < d)
    {
      d += y;
    }
    else
    {
      break;
    }

  }

  std::cout << d << '\n';

  return 0;
}
