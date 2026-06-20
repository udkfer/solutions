#include <iostream>
#include <vector>

int main()
{
  int k{}, m{};
  std::cin >> k >> m;

  std::vector<int> list{};
  for(int i = 1; i <= k; ++i)
  {
    list.push_back(i);
  }

  std::vector<int> filter{};
  for(int j{}; j < m; ++j)
  {
    int divisor{}; 
    std::cin >> divisor;
    std::vector<int> round;

    for (int i = 0; i < list.size(); ++i) {
      int position = i + 1;
      if (position % divisor != 0) {
        round.push_back(list[i]);
      }
    }
    list = round;
  }

  for(int i{}; i < list.size(); ++i)
  {
    std::cout << list[i] << '\n';
  }

  return 0;
}
