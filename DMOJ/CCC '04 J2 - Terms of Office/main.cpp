#include <iostream>

int main()
{
  int x{}, y{};
  std::cin >> x >> y;

  for(int year = x; year <= y; year += 60)
  {
    std::cout << "All positions change in year " << year << '\n';
  }

  return 0;
}
