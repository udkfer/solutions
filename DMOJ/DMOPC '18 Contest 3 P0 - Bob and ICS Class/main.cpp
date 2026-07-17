#include <iostream>
#include <cmath>

int main()
{
  int r1{}, g1{}, b1{}, r2{}, g2{}, b2{};
  std::cin >> r1 >> g1 >> b1 >> r2 >> g2 >> b2;

  int cr1 = int(int(sqrt(r1)));
  int cg1 = int(int(sqrt(g1)));
  int cb1 = int(int(sqrt(b1)));
  int cr2 = int(int(sqrt(r2)));
  int cg2 = int(int(sqrt(g2)));
  int cb2 = int(int(sqrt(b2)));

  if(cr1 == cr2 && cg1 == cg2 && cb1 == cb2)
    std::cout << "Dull\n";
  else
    std::cout << "Colourful\n";

  return 0;
}
