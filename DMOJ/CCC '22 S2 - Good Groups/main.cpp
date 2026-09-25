#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <unordered_map>

int main()
{
  int x{};
  std::cin >> x;

  std::vector<std::pair<std::string, std::string>> same;
  for(int i{}; i < x; ++i)
  {
    std::string a, b;
    std::cin >> a >> b;
    same.push_back({a, b});
  }

  int y{};
  std::cin >> y;

  std::vector<std::pair<std::string, std::string>> different;
  for(int i{}; i < y; ++i)
  {std::string a, b;
    std::cin >> a >> b;
    different.push_back({a, b});
  }

  int g{};
  std::cin >> g;

  std::unordered_map<std::string, int> group;
  for(int i{}; i < g; ++i)
  {
    std::string a, b, c;
    std::cin >> a >> b >> c;
    group[a] = i;
    group[b] = i;
    group[c] = i;
  }

  int violations{};

  for (const auto& p : same)
  {
    if (group[p.first] != group[p.second])
      ++violations;
  }

  for (const auto& p : different)
  {
    if (group[p.first] == group[p.second])
      ++violations;
  }

  std::cout << violations << '\n';

  return 0;
}
