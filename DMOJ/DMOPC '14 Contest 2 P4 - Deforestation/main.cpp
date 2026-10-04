#include <bits/stdc++.h>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<int> m(n);
  for(int i{}; i < n; ++i)
  {
    std::cin >> m[i];
  }

  std::vector<long long> P(n + 1, 0);
  for(int l{}; l < n; ++l)
  {
    P[l + 1] = P[l] + m[l];
  }

  int g{};
  std::cin >> g;

  for(int j{}; j < g; ++j)
  {
    int a{}, b{};
    std::cin >> a >> b;
    std::cout << P[b + 1] - P[a] << '\n';
  }

  return 0;
}
