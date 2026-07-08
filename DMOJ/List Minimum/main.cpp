#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<int> list{};

  for(int i{}; i < n; ++i)
  {
    int element{};
    std::cin >> element;
    list.push_back(element); 
  }

  std::sort(list.begin(), list.end());

  for(int i : list)
  {
    std::cout << i << '\n';
  }

  return 0;
}
