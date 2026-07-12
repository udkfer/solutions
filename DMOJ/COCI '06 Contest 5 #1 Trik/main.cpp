#include <iostream>

int main()
{

  std::string moves{};
  std::cin >> moves;

  int pos = 1;


  for(int i{}; i < moves.size(); ++i)
  {
    switch(moves[i])
    {
      case 'A':
        switch(pos)
        {
          case 1:
            pos = 2;
            break;
          case 2:
            pos = 1;
            break;
        }
        break;
      case 'B':
        switch(pos)
        {
          case 2:
            pos = 3;
            break;
          case 3:
            pos = 2;
            break;
        }
        break;
      case 'C':
        switch(pos)
        {
          case 1:
            pos = 3;
            break;
          case 3:
            pos = 1;
            break;
        }
        break;
    }
  }

  std::cout << pos << '\n';

  return 0;
}
