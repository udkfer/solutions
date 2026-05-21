#include <iostream>
#include <string>

int main()
{
  std::string s{};
  std::getline(std::cin, s);

  int l{};
  while(l < s.length())
  {
    if((s[l] != 'I') && (s[l] != 'O') && (s[l] != 'S') && (s[l] != 'H') && (s[l] != 'Z') && (s[l] != 'X') && (s[l] != 'N'))
    {
      std::cout << "NO\n";
      return 0;
    }

    ++l;
  }
  std::cout << "YES\n";

  return 0;
}

