#include <iostream>

int main()
{
  char letter{};
  std::cin >> letter;

  int n{};
  std::cin >> n;

  bool seen[26] = {};
  seen[letter - 'A'] = true;

  for(int i{}; i < n; ++i)
  {
    char z1{}, z2{};
    std::cin >> z1 >> z2;

    if (z2 == letter)
      letter = z1;

    seen[letter - 'A'] = true;
  }

  int count{};

  for (int i{}; i < 26; ++i)
    if (seen[i])
      ++count;

  std::cout << letter << '\n';
  std::cout << count << '\n';

  return 0;
}
