#include <iostream>

int main()
{
  int n{};
  std::cin >> n;


  int minX{}, minY{}, maxX{}, maxY{};
  char comma{};

  std::cin >> minX >> comma >> minY;

  maxX = minX;
  maxY = minY;

  for(int i = 1; i < n; ++i)
  {
    int x{}, y{};
    std::cin >> x >> comma >> y;

    if(x < minX)
      minX = x;
    else if(x > maxX)
      maxX = x;

    if(y < minY)
      minY = y;
    else if(y > maxY)
      maxY = y;
  }

  std::cout << minX - 1 << ',' << minY - 1 << '\n';
  std::cout << maxX + 1 << ',' << maxY + 1 << '\n';

  return 0;
}
