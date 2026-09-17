#include <iostream>
#include <vector>
#include <string>

int main()
{

  std::vector<std::string> city{};
  std::vector<int> temperature{};

  while(true)
  {
    std::string name;
    int temp;

    std::cin >> name >> temp;

    city.push_back(name);
    temperature.push_back(temp);

    if(name == "Waterloo")
      break;
  }

  int coldest{};
  for(int i = 1; i < city.size(); ++i)
  {
    if(temperature[i] < temperature[coldest])
      coldest = i;
  }

  std::cout << city[coldest] << '\n';

  return 0;
}
