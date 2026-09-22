#include <iostream>
#include <string>

int main()
{
  int n{};
  std::cin >> n;

  int counts[5] = {0};
  std::string s;
  for(int i{}; i < n; ++i)
  {
    std::cin >> s;

    for(int j{}; j < 5; ++j)
    {
      if(s[j] == 'Y')
        ++counts[j];
    }
  }

  int best = counts[0];
  for (int j = 1; j < 5; ++j)
  {
    if (counts[j] > best)
      best = counts[j];
  }

  bool first = true;
  for (int j{}; j < 5; ++j)
  {
    if (counts[j] == best)
    {
      if (!first)
        std::cout << ',';
      std::cout << j + 1;
      first = false;
    }
  }

  std::cout << '\n';

  return 0;
}
