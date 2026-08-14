#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<int> h(n + 1);
  for(int i{}; i <= n; ++i)
  {
    std::cin >> h[i];
  }

  double area{}, total{};

  std::vector<int> w(n);
  for(int i{}; i < n; ++i)
  {
    std::cin >> w[i];
    area = w[i] * (h[i] + h[i+1]) / 2.0;
    total += area;
  }

  std::cout << std::fixed << std::setprecision(6) << total << '\n';

  return 0;
}
