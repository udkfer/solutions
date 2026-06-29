#include <iostream>
#include <cmath>
int main()
{
  int distance1{}, distance2{}, distance3{}, distance4{}; 
  std::cin >> distance1 >> distance2 >> distance3 >> distance4;

  int h1 = 0;
  int h2 = h1 + distance1;
  int h3 = h2 + distance2;
  int h4 = h3 + distance3;
  int h5 = h4 + distance4;

  std::cout << std::abs(h1 - h1) << " " << std::abs(h1 - h2) << " " << std::abs(h1 - h3) << " " << std::abs(h1 - h4) << " " << std::abs(h1 - h5) << "\n";

  std::cout << std::abs(h2 - h1) << " " << std::abs(h2 - h2) << " " << std::abs(h2 - h3) << " " << std::abs(h2 - h4) << " " << std::abs(h2 - h5) << "\n";

  std::cout << std::abs(h3 - h1) << " " << std::abs(h3 - h2) << " " << std::abs(h3 - h3) << " " << std::abs(h3 - h4) << " " << std::abs(h3 - h5) << "\n";

  std::cout << std::abs(h4 - h1) << " " << std::abs(h4 - h2) << " " << std::abs(h4 - h3) << " " << std::abs(h4 - h4) << " " << std::abs(h4 - h5) << "\n";

  std::cout << std::abs(h5 - h1) << " " << std::abs(h5 - h2) << " " << std::abs(h5 - h3) << " " << std::abs(h5 - h4) << " " << std::abs(h5 - h5) << "\n";

  return 0;

}
