#include <iostream>
#include <vector>

int main()
{
  int x{}, n{};
  std::cin >> x >> n;

  int p{}, sum{};
  for(int i{}; i < n; ++i)
  {
    std::cin >> p;
    sum += p;
  }

  int surplus= ((n + 1) * x)  - sum;

  std::cout << surplus << '\n';
  return 0;
}
