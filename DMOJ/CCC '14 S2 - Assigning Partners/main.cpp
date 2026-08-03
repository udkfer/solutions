#include <iostream>
#include <vector>
#include <string>
#include <map>


int main()
{
  int n{};
  std::cin >> n;

  std::vector<std::string> names(n); 

  for(int i{}; i < n; ++i)
  {
    std::cin >> names[i];
  }

  std::vector<std::string> pairs(n); 
  for(int i{}; i < n; ++i)
  {
    std::cin >> pairs[i];
  }

  std::map<std::string, std::string> pairMap;
  for(int i{}; i < n; ++i)
  {
    pairMap[names[i]] = pairs[i];
  }

  for(int i{}; i < n; ++i)
  {
    if(names[i] == pairs[i])
    {
      std::cout << "bad\n";
      return 0;
    }

    if (pairMap[pairs[i]] != names[i])
    {
      std::cout << "bad\n";
      return 0;
    }

  }

  std::cout << "good\n";

  return 0;
}
