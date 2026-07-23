#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n{};
  std::cin >> n;

  int v{};

  std::vector<int> a(n);
  for(int i{}; i < n; ++i)
    std::cin >> a[i];

  std::sort(a.begin(), a.end());
  v = a[n/2];

  std::cout << v << '\n';

  return 0;
}
