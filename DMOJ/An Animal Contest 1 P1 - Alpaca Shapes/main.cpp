#include <iostream>
#include <math.h>

int main()
{
  int s{}, r{};
  std::cin >> s >> r;

  if(pow(s, 2) > (3.14 * pow(r, 2)))
  {

    std::cout << "SQUARE\n";
  }
  else
    std::cout << "CIRCLE\n";

  return 0;
}
