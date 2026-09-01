#include <iostream>
#include <string>

int main()
{
  std::string first{}, second{};
  std::cin >> first >> second;

  int countFirst[26] = {};
  int countSecond[26] = {};

  for (char c : first)
  {
    countFirst[c - 'a']++;
  }

  for (char c : second)
  {
    if (c != '*')
    {
      countSecond[c - 'a']++;
    }
  }

  bool ok = true;

  for (int i{}; i < 26; i++)
  {
    if (countSecond[i] > countFirst[i])
    { 
      ok = false;
      break;
    }
  }

  std::cout << (ok ? 'A' : 'N') << '\n';

  return 0;
}
