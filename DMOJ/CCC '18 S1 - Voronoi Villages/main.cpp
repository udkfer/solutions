#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<int> queue{};

  int counter{};
  while(counter < n)
  {
    int temp{};
    std::cin >> temp;
    queue.push_back(temp);

    ++counter;
  }

  std::sort(queue.begin(), queue.end());

  double min_size = (queue[2] - queue[0]) / 2.0;

  for(int i = 1; i < (n - 1); ++i)
  {
    double size_now = ((queue[i + 1] - queue[i - 1]) / 2.0);

    if(size_now < min_size)
      min_size = size_now;
  }

  std::cout << std::fixed << std::setprecision(1) << min_size << '\n';

  return 0;
}
