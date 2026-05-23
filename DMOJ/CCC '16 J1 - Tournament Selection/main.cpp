#include <iostream>

int main()
{
  char s{};

  int W{};

  int count = 6;
  while(count > 0)
  {
    std::cin >> s;

    switch(s)
    {
      case('W'):
        ++W;
        break;
    }
    --count;
  }

  if(W >= 5)
    std::cout << "1\n";
  else if((W == 3) || (W == 4))
    std::cout << "2\n";
  else if((W == 1) || (W == 2))
    std::cout << "3\n";
  else
    std::cout << "-1\n";

  return 0;
}
