#include <iostream>

int main()
{
  int n{}, b{};
  std::cin >> n >> b;

  int total{};
  for(int i{}; i < n; ++i)
  {
    int p{};
    std::cin >> p;
    total = total + p;
  }

  if(total <= b)
    std::cout << b - total << '\n';
  else
    std::cout << "The budget will balance itself\n";

  return 0;
}
