#include <iostream>
#include <string>

int main()
{
  std::string orientation{};
  std::cin >> orientation;

  bool evenfliph = false;
  bool evenflipv = false;

  int loop{};
  while(loop < orientation.length())
  {
    char current_char = orientation[loop];

    if(current_char == 'H')
      evenfliph = !evenfliph;
    else if (current_char == 'V')
      evenflipv = !evenflipv;


    ++loop;
  }

  if (evenfliph && evenflipv)
  {
    std::cout << 4 << ' ' << 3 << '\n';
    std::cout << 2 << ' ' << 1 << '\n';
  }
  else if (evenfliph && !evenflipv)
  {
    std::cout << 3 << ' ' << 4 << '\n';
    std::cout << 1 << ' ' << 2 << '\n';
  }
  else if (!evenfliph && evenflipv)
  {
    std::cout << 2 << ' ' << 1 << '\n';
    std::cout << 4 << ' ' << 3 << '\n';
  }
  else
  {
    std::cout << 1 << ' ' << 2 << '\n';
    std::cout << 3 << ' ' << 4 << '\n';
  }


  return 0;
}
