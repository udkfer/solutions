#include <iostream>
#include <string>
#include <cstdlib>


bool isVowel(char c)
{
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char nextConsonant(char c)
{
  if (c == 'z') return 'z';

  char next = c + 1;
  while (isVowel(next))
  {
    next = next + 1;
  }
  return next;
}

int main()
{
  std::string word{};
  std::cin >> word;

  for (char c : word)
  {
    int bestDist{100};
    char bestV{'?'};

    for (char v : std::string{"aeiou"})
    {
      int dist{std::abs(c - v)};
      if (dist < bestDist)
      {
        bestDist = dist;
        bestV = v;
      }
    }
    if (isVowel(c))
    {
      std::cout << c;
    }
    else
    {
      std::cout << c << bestV << nextConsonant(c);
    }
  }

  std::cout << '\n';

  return 0;
}
