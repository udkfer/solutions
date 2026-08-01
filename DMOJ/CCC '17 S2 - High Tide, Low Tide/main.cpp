#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n{};
  std::cin >> n;

  std::vector<int> measurements(n);
  for(int i{}; i < n; ++i)
  {
    std::cin >> measurements[i];
  }

  std::sort(measurements.begin(), measurements.end());

  int low_count = (n + 1) / 2;
  int high_count = n / 2;

  std::vector<int> low(low_count);
  std::vector<int> high(high_count);

  for(int i{}; i < low_count; ++i)
  {
    low[i] = measurements[low_count - 1 - i];
  }

  for(int i{}; i < high_count; ++i)
  {
    high[i] = measurements[low_count + i]; // Fix: start right after low elements
  }

  for(int i{}; i < high_count; ++i)
  {
    std::cout << low[i] << ' ' << high[i];
    if(i < high_count - 1)
      std::cout << ' ';
  }

  if(low_count > high_count)
    std::cout << ' ' << low.back();

  std::cout << '\n';

  return 0;
}
