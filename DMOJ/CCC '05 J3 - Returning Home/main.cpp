#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::vector<char> direction{};
  std::vector<std::string> street{};

  while(true)
  {
    char tempd{};
    std::cin >> tempd;
    direction.push_back(tempd);

    std::string temps{}; 
    std::cin >> temps;
    street.push_back(temps);

    if(temps == "SCHOOL")
      break;
  }

  for(int i = street.size() - 1; i >= 0; --i)
  {
    if(direction[i] == 'R')
      std::cout << "Turn LEFT";
    else if(direction[i] == 'L')
      std::cout << "Turn RIGHT";

    if(i == 0)
      std::cout << " into your HOME.\n";
    else
      std::cout << " onto " << street[i - 1] << " street.\n";
  }

  return 0;
}
