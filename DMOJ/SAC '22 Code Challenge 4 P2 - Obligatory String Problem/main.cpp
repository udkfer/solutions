#include <iostream>

int main()
{
  int k{};
  std::cin >> k;

  std::string c{};
  std::cin >> c;


  for(char letter1 = 'a'; letter1 <= 'z'; ++letter1)
  {
    for(char letter2 = 'a'; letter2 <= 'z'; ++letter2)
    {
      for(char letter3 = 'a'; letter3 <= 'z'; ++letter3)
      {
        for(char letter4 = 'a'; letter4 <= 'z'; ++letter4)
        {
          std::string candidate = std::string(1, letter1) + letter2 + letter3 + letter4;
          int straight{};
          int total{};
          for(int i{}; i <= 3; ++i)
          {
            straight = std::abs(candidate[i] - c[i]);
            int distance = std::min(straight, 26 - straight);
            total = distance + total;
          }
          if(total <= k)
            std::cout << candidate << '\n';
        }
      }
    }
  }

  // std::cout << k << '\n' << c << '\n';

  return 0;
}
