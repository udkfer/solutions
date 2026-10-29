#include <iostream>
#include <cstring>

int memo[251][251][251];

int ways(int remaining, int people_left, int min_allowed)
{
  if(memo[remaining][people_left][min_allowed] != -1)
    return memo[remaining][people_left][min_allowed];

  if (people_left == 0)
    return remaining == 0 ? 1 : 0;
  if (people_left == 1)
    return remaining >= min_allowed ? 1 : 0;

  int total{};
  for (int next = min_allowed; next <= remaining - (people_left - 1); ++next)
  {
    total += ways(remaining - next, people_left - 1, next);
  }

  memo[remaining][people_left][min_allowed] = total;
  return total;
}

int main()
{
  int n{}, k{};
  std::cin >> n >> k;

  memset(memo, -1, sizeof(memo));

  std::cout << ways(n,k,1) << '\n';

  return 0;
}
