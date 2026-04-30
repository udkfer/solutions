#include <iostream>

int main()
{
  int x{};

  while(x != 1999)
  {
    std::cin >> x;

    if(x != 1999)
      std::cout << "Wrong\n";
  }

    std::cout << "Correct\n";

  return 0;
}
