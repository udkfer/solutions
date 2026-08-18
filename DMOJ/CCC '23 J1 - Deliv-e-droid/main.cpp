#include <iostream>

int main()
{
  int p{}, c{};
  std::cin >> p >> c;

  int points = ((p * 50) - (c * 10));

  if( p > c)
    points += 500;

  std::cout << points << '\n';

  return 0;
}
