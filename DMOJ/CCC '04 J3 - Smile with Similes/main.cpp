#include <iostream>
#include <string>

int main()
{
  int n{}, m{};
  std::cin >> n >> m;

  std::string adjectives[5];
  std::string nouns[5];

  int counter1{};
  while(counter1 < n)
  {
    std::cin >> adjectives[counter1];
    ++counter1;
  }

  int counter2{};
  while(counter2 < m)
  {
    std::cin >> nouns[counter2];
    ++counter2;
  }

  int i{};
  while (i < n) 
  {
    int j{};
    while (j < m) 
    {
      std::cout << adjectives[i] << " as " << nouns[j] << '\n';
      ++j;
    }
    ++i;
  }

  return 0;
}
