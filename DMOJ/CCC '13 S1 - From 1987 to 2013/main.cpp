#include <iostream>

int main()
{
  int y{};
  std::cin >> y;

  int next_year = y;

  bool distinc = false;

  while(distinc != true)
  {
    ++next_year;
    int next_year_register = next_year;
    int last_digit{};
    bool seen[10] = {false};

    distinc = true;
    while(next_year_register != 0)
    {
      last_digit = (next_year_register % 10);
      if(seen[last_digit] == true)
      {
        distinc = false;
        break;
      }
      seen[last_digit] = true;
      next_year_register /= 10;
    }
  }

  std::cout << next_year << '\n';

  return 0;
}
