#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<std::vector<int>> tri(n);

  for(int i{}; i < n; ++i)
  {
    tri[i].resize(i+1);
    for(int j{}; j <= i; ++j)
    {
      std::cin >> tri[i][j];
    }
  }

  for(int i = n-2; i >= 0; --i)
    for(int j{}; j <= i; ++j)
      tri[i][j] += std::max(tri[i+1][j], tri[i+1][j+1]);

  std::cout << tri[0][0];

  return 0;
}
