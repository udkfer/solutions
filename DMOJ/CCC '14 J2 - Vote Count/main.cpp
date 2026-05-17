#include <iostream>

int main()
{
  int v{}, a{}, b{};
  std::cin >> v;

  char c{};

  int l{};
  while(l < v)
  {
    std::cin >> c;
    switch(c)
    {
      case 'A':
        ++a;
        break;
      case 'B':
        ++b;
        break;
    }
    ++l;
  }

  if(a > b)
    std::cout << "A\n";
  else if(b > a)
    std::cout << "B\n";
  else if(a == b)
    std::cout << "Tie\n";

  return 0;
}
