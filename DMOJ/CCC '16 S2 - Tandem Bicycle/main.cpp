#include<iostream>
#include <vector>
#include <algorithm>

int main()
{
  int question{};
  std::cin >> question;

  int n{};
  std::cin >> n;

  std::vector<int> dmojistan_speed(n);
  for(int i{}; i < n; ++i)
    std::cin >> dmojistan_speed[i]; 

  std::vector<int> pegland_speed(n);
  for(int i{}; i < n; ++i)
    std::cin >> pegland_speed[i]; 

  std::sort(dmojistan_speed.begin(), dmojistan_speed.end());
  std::sort(pegland_speed.begin(), pegland_speed.end());

  int max_speed{};
  int min_speed{};

  switch(question)
  {
    case 1:
      for(int i{}; i < n; ++i)
      {
        min_speed += std::max(dmojistan_speed[i], pegland_speed[i]);
      }
      std::cout << min_speed << '\n';
      break;
    case 2:
      for(int i{}; i < n; ++i)
      {
        max_speed += std::max(dmojistan_speed[i], pegland_speed[n - 1 - i]);
      }
      std::cout << max_speed << '\n';
      break;
  }

  return 0;
}
