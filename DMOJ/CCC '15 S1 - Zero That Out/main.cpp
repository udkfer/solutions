#include <iostream>
#include <vector>

int main()
{
  int k{};
  std::cin >> k;

  std::vector<int> n{};
  int last_n{};

  int counter{};
  while(counter < k)
  {

    std::cin >> last_n;

    if(last_n == 0)
      n.pop_back();
    else
    {
      n.push_back(last_n);
    }

    ++counter;
  }

  int sum{};
  for (int iterator : n)
  {
    sum += iterator;
  }

  std::cout << sum << '\n';

  return 0;
}
