#include <iostream>
#include <string>
#include <vector>

int main()
{
  int a{}, k{};
  std::cin >> a >> k;

  std::vector<int> d(a);
  std::vector<std::string> assessment(a);

  for(int i{}; i < a; ++i)
  {
    std::cin >> d[i];
    std::cin >> assessment[i];
  }

  int last_day{};
  std::vector<int> c(k);
  for(int i{}; i < k; ++i)
  {
    std::cin >> c[i];

    for(int j{}; j < a; ++j)
    {
      if(d[j] > last_day && d[j] <= c[i])
      {
        std::cout << assessment[j] << '\n';
      }
    }

    last_day = c[i];

  }

  return 0;
}
