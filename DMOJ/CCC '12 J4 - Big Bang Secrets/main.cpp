#include <iostream>
#include <string>

int main()
{
  int k{};
  std::string word{};

  std::cin >> k >> word;

  for(int i{}; i < word.size(); ++i)
  {
    char c = word[i];
    int n = c - 'A';
    int s = 3 * (i + 1) + k;
    int fixed = ((n - s) % 26 + 26) % 26;
    std::cout << static_cast<char>(fixed + 'A');
  }

  return 0;
}
