#include <iostream>

int main()
{
  int d1{}, d2{}, d3{}, d4{};
  std::cin >> d1 >> d2 >> d3 >> d4;

  if((d1 > d2) && (d2 > d3) && (d3 > d4))
    std::cout << "Fish Diving\n";
  else if((d1 < d2) && (d2 < d3) && (d3 < d4))
    std::cout << "Fish Rising\n";
  else if((d1 == d2) && (d2 == d3) && (d3 == d4))
    std::cout << "Fish At Constant Depth\n";
  else
    std::cout << "No Fish\n";

  return 0;
}
