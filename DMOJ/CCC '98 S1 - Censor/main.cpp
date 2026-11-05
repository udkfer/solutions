#include <iostream>
#include <string>
#include <limits>
#include <sstream>

int main()
{
  int n{};
  std::cin >> n;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  for(int i{}; i < n; ++i)
  {
    std::string l{};
    std::getline(std::cin, l);

    std::istringstream ss(l);
    std::string word;

    bool first = true;
    while (ss >> word)
    {
      if (!first)
        std::cout << ' ';
      if (word.size() == 4)
        std::cout << "****";
      else
        std::cout << word;

      first = false;
    }
    std::cout << '\n';
  }


  return 0;
}
