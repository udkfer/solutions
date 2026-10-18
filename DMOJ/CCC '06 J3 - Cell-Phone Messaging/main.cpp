#include <iostream>
#include <string>

int presses(char c)
{
  std::string groups[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  for (int i{}; i < 8; ++i)
  {
    size_t pos = groups[i].find(c);
    if (pos != std::string::npos)
    {
      return pos + 1;
    }
  }
  return 0;
}


int key(char c)
{
  std::string groups[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  for (int i{}; i < 8; ++i)
  {
    size_t pos = groups[i].find(c);
    if (pos != std::string::npos)
    {
      return i + 2;
    }
  }
  return 0;
}

int main()
{
  std::string word{};
  while(std::cin >> word)
  {
    if(word == "halt")
      break;

    int total = presses(word[0]);
    for (size_t i = 1; i < word.size(); ++i)
    {
      if(key(word[i]) == key(word[i-1]))
        total += 2;
      total += presses(word[i]);
    }
    std::cout << total << "\n";
  }

  return 0;
}
