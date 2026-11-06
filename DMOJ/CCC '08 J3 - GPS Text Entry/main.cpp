#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <cstdlib>

std::vector<std::string> grid =
{
  "ABCDEF",
  "GHIJKL",
  "MNOPQR",
  "STUVWX",
  "YZ -."
};

std::pair<int,int> pos(char c)
{
  for (int r{}; r < 5; ++r)
  {
    for (int col{}; col < 6; ++col)
    {
      if (grid[r][col] == c)
      {
        return {r, col};
      }
    }
  }
  return {4, 5};
}

int main()
{
  std::string s{};
  std::getline(std::cin, s);

  std::pair<int,int> cur = {0, 0};
  int total{};

  for (char c : s)
  {
    std::pair<int,int> target = pos(c);
    total += abs(cur.first - target.first) + abs(cur.second - target.second);
    cur = target;
  }
  total += abs(cur.first - 4) + abs(cur.second - 5);

  std::cout << total << '\n';

  return 0;
}
