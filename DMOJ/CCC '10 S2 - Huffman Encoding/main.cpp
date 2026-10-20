#include <iostream>
#include <string>
#include <map>


int main()
{
  int k{};
  std::cin >> k;

  std::map<std::string, char> codeToChar;
  for(int i{}; i < k; ++i)
  {
    char c{};
    std::string sequence{};
    std::cin >> c >> sequence;

    codeToChar[sequence] = c;
  }

  std::string encoded{};
  std::cin >> encoded;

  std::string current{};
  std::string decoded{};

  for(int i{}; i < encoded.size(); ++i)
  {
    current += encoded[i];

    auto it = codeToChar.find(current);
    if (it != codeToChar.end())
    {
      decoded += it -> second;
      current.clear();
    }

  }

  std::cout << decoded;

  return 0;
}
