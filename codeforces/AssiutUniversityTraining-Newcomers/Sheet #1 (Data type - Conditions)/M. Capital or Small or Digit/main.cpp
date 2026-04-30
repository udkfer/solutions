#include <iostream>

int main()
{
  char x;
  std::cin >> x;

  switch((int)x)
  {
  case 65 ... 90 :
    std::cout << "ALPHA" << '\n';
    std::cout << "IS CAPITAL" << '\n';
  break;
  case 97 ... 122 :
    std::cout << "ALPHA" << '\n';
    std::cout << "IS SMALL" << '\n';
  break;
  default :
    std::cout << "IS DIGIT" << '\n';
  break;
  }

  return 0;
}
