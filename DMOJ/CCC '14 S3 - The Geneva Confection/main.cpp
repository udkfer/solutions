#include <iostream>
#include <vector>
#include <stack>

int main()
{
  int t{};
  std::cin >> t;

  for(int i{}; i < t; ++i)
  {
    int n{};
    std::cin >> n;

    std::vector<int> cars(n);

    for(int j{}; j < n; ++j)
    {
      std::cin >> cars[j];
    }

    std::stack<int> branch;
    int want = 1;

    for(int j = (n - 1); j >= 0; --j)
    {
      if( cars[j] == want)
      {
        ++want;
        while (!branch.empty() && branch.top() == want)
        {
          branch.pop();
          ++want;
        }
      }
      else
        branch.push(cars[j]);
    }

    bool possible = true;
    while (!branch.empty())
    {
      if (branch.top() == want)
      {
        branch.pop();
        ++want;
      }
      else
      {
        possible = false;
        break;
      }
    }
    std::cout << (possible ? "Y" : "N") << "\n";

  }

  return 0;
}
