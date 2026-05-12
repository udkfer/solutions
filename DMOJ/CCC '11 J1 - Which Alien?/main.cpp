#include <iostream>

int main()
{
  int a{}, e{};
  std::cin >> a >> e;

  if((a >= 3) && (e <= 4))
    std::cout << "TroyMartian\n";

  if((a <= 6) && (e >= 2))
    std::cout << "VladSaturnian\n";

  if((a <= 2) && (e <= 3))
    std::cout << "GraemeMercurian\n";

  return 0;
}
