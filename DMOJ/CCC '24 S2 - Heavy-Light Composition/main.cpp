#include <iostream>
#include <string>

int main()
{
  int t{}, n{};
  std::cin >> t >> n;

  for(int i{}; i < t; ++i)
  {
    std::string letters{};
    std::cin >> letters;

    int freq[26] = {};
    for(char c : letters)
      ++freq[c - 'a'];

    bool ok = true;
    for (size_t j = 1; j < letters.size(); ++j)
    {
      bool currHeavy = freq[letters[j] - 'a'] > 1;
      bool prevHeavy = freq[letters[j - 1] - 'a'] > 1;
      if (currHeavy == prevHeavy)
      {
        ok = false;
        break;
      }
    }

    std::cout << (ok ? 'T' : 'F') << '\n';

  }

  return 0;
}
