#include <iostream>
#include <string>

int main()
{
  std::string word{};
  std::getline(std::cin, word);

  std::string result{};

  for (size_t i{}; i < word.size(); )
  {
    result += word[i];
    if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
      i += 3;
    else
      ++i;
  }

  std::cout << result;

  return 0;
}
