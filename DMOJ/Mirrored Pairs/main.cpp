#include <iostream>

int main()
{
  std::cout << "Ready\n";

  while(true)
  {
    char c1{}, c2{};
    std::cin.get(c1);
    std::cin.get(c2);
    std::cin.get();

    if(c1 == ' ' && c2 == ' ')
      break;

    if((c1=='b' && c2=='d') || (c1=='d' && c2=='b') || (c1=='p' && c2=='q') || (c1=='q' && c2=='p'))
      std::cout << "Mirrored pair\n";
    else
      std::cout << "Ordinary pair\n";
  }

  return 0;
}
