#include <iostream>
#include <string>

int main()
{
  std::string first{}, second{};
  std::getline(std::cin, first);
  std::getline(std::cin, second);

  int countFirst[26] = {};
  for(int i{}; i < first.size(); ++i)
  {
    char c = first[i];
    if (c != ' ')
    {
      countFirst[c - 'A']++;
    }
  }

  int countSecond[26] = {};
  for(int i{}; i < second.size(); ++i)
  {
    char c = second[i];
    if (c != ' ')
    {
      countSecond[c - 'A']++;
    }
  }

  bool anagram = true;
  for (int i{}; i < 26; ++i)
  {
    if(countFirst[i] != countSecond[i])
    {
      anagram = false;
      break;
    }
  }

  if(anagram)
  {
    std::cout << "Is an anagram.\n";
    return 0;
  }

  std::cout << "Is not an anagram.\n";

  return 0;
}
