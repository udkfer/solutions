#include <iostream>

int main()
{
  int p{}, b{}, d{};
  std::cin >> p >> b >> d;

  int doable_badges = p / b;
  int badge_sells = doable_badges * d;
  int remaining_paint = p % b; 
  int total_pokedollars = badge_sells + remaining_paint;

  std::cout << total_pokedollars << '\n';

  return 0;
}
