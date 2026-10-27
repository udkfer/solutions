#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int list;
  std::cin >> list;

  std::vector<int> items(list);

  for(int i{}; i < list; ++i)
  {
    std::cin >> items[i];
  }

  std::sort(items.begin(), items.end());

  for(int i{}; i < list; ++i)
  {
    std::cout << items[i] << '\n';
  }

  return 0;
}
