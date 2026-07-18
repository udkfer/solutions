#include <iostream>

int main()
{
  int board[101] = {};
  for(int i = 1; i <= 100; i++)
  {
    board[i] = i;
  }

  board[9] = 34;
  board[40] = 64;
  board[67] = 86;

  board[54] = 19;
  board[90] = 48;
  board[99] = 77;

  int pos = 1;
  int n = 0;

  while(true)
  {
    std::cin >> n;

    if(n == 0)
    {
      std::cout << "You Quit!\n";
      return 0;
    }

    if((pos + n) <= 100)
    {
      pos = board[pos + n];
    }

    std::cout << "You are now on square " << pos << '\n';

    if(pos == 100)
    {
      std::cout << "You Win!\n";
      break;
    }
  }

  return 0;
}
