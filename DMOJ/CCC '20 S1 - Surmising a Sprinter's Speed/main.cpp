#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iomanip>

int main()
{
  int n{};

  std::cin >> n;

  std::vector<std::pair<int,int>> obs(n);

  for(int i{}; i < n; ++i)
  {
    int t{}, x{};
    std::cin >> t >> x;
    obs[i] = {t, x};
  }

  std::sort(obs.begin(), obs.end(), [](const auto& a, const auto& b)
      {
      return a.first < b.first;
      });

  double max{};

  for (int i{}; i < n - 1; ++i) {
    int dt = obs[i+1].first - obs[i].first;
    int dx = obs[i+1].second - obs[i].second;
    double speed = std::abs(dx) / double(dt);
    if (speed > max) max = speed;
  }

  std::cout << std::fixed << std::setprecision(1) << max << '\n';

  return 0;
}
