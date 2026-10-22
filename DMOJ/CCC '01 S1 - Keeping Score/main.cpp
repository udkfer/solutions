#include <iostream>
#include <string>

int main()
{
  std::string cards{};
  std::cin >> cards;

  std::string suits[4];
  int cur = -1;

  for(char c : cards)
  {
    switch(c)
    {
      case 'C':
        cur = 0;
        break;
      case 'D':
        cur = 1;
        break;
      case 'H':
        cur = 2;
        break;
      case 'S':
        cur = 3;
        break;
      default:
        suits[cur] += c;
        break;
    }
  }

  int points[4]{};
  for(int i{}; i <= 3; ++i)
  {
    for(char c : suits[i])
    {
      switch(c)
      {
        case 'A':
          points[i] += 4;
          break;
        case 'K':
          points[i] += 3;
          break;
        case 'Q':
          points[i] += 2;
          break;
        case 'J':
          points[i] += 1;
          break;
      }
    }

    if (suits[i].size() == 0)
      points[i] += 3;
    else if (suits[i].size() == 1)
      points[i] += 2;
    else if (suits[i].size() == 2)
      points[i] += 1;

  }

  std::cout << "Cards Dealt Points\n";

  std::string names[4] = {"Clubs","Diamonds","Hearts","Spades"};

  for(int i{}; i <= 3; ++i)
  {
    std::cout << names[i] << ' ';

    for(char c : suits[i])
    {
      std::cout << c << ' ';
    }
    std::cout << points[i] << '\n';
  }

  std::cout << "Total " << points[0]+points[1]+points[2]+points[3] << "\n";

  return 0;
}
