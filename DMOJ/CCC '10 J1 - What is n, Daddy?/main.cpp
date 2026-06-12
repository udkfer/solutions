#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int p{};
  for(int x{}; x <= 5; ++x)
  {
    int y = n - x;
    if((y >= 0) && (x >= y))
    {
      ++p;
    }
  }

  std::cout << p << '\n';

  return 0;
}
