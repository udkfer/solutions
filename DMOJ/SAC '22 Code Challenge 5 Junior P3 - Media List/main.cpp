#include <iostream>
#include <string>
#include <vector>
#include <set>

int main()
{
  int n{}, q{};
  std::cin >> n >> q;

  std::vector<std::set<std::string>> storage(n);

  for(int i{}; i < q; ++i)
  {
    int type{}, index{};
    std::string name;

    std::cin >> type >> index >> name;

    if(type == 1)
    {
      std::cout << storage[index - 1].count(name) << '\n';
    }
    else if(type == 2)
    {
      storage[index - 1].insert(name);
    }

  }

  return 0;
}
