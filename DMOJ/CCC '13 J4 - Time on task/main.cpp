#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int t{}, c{};
  std::cin >> t >> c;

  std::vector<int> chores{};

  for(int i{}; i < c; ++i)
  {
    int task_time{};
    std::cin >> task_time;
    chores.push_back(task_time);
  }

  std::sort(chores.begin(), chores.end());
  int counter{};

  for(int i{}; i < chores.size(); ++i)
  {
    t -= chores[i];

    if(t >= 0)
      ++counter;
    else
      break;
  }

  std::cout << counter << '\n';

  return 0;
}
