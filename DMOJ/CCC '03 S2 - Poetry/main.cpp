#include <iostream>
#include <string>
#include <cctype>

std::string lastWord(const std::string& line)
{
  size_t pos = line.rfind(' ');

  if (pos == std::string::npos)
    return line;

  return line.substr(pos + 1);
}

bool isVowel(char c)
{
  c = std::tolower(c);

  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

std::string lastSyllable(const std::string& word)
{
  for (int i = (int)word.size() - 1; i >= 0; --i)
  {
    if (isVowel(word[i]))
      return word.substr(i);
  }

  return word;
}

std::string toLowerStr(const std::string& s)
{
  std::string result;

  for (char c : s)
  {
    result += std::tolower((unsigned char)c);
  }

  return result;
}

int main()
{
  int n{};
  std::cin >> n;

  std::string dummy{};
  std::getline(std::cin, dummy);

  for(int i{}; i < n; ++i)
  {
    std::string l1{}, l2{}, l3{}, l4{};
    std::getline(std::cin, l1);
    std::getline(std::cin, l2);
    std::getline(std::cin, l3);
    std::getline(std::cin, l4);

    std::string s1 = toLowerStr(lastSyllable(lastWord(l1)));
    std::string s2 = toLowerStr(lastSyllable(lastWord(l2)));
    std::string s3 = toLowerStr(lastSyllable(lastWord(l3)));
    std::string s4 = toLowerStr(lastSyllable(lastWord(l4)));

    if (s1 == s2 && s2 == s3 && s3 == s4)
      std::cout << "perfect\n";
    else if (s1 == s2 && s3 == s4)
      std::cout << "even\n";
    else if (s1 == s3 && s2 == s4)
      std::cout << "cross\n";
    else if (s1 == s4 && s2 == s3)
      std::cout << "shell\n";
    else
      std::cout << "free\n";
  }

  return 0;
}
