#include <iostream>
#include <string>

int main()
{
  int n{}, t{};
  std::cin >> n;

  for(int i{}; i < n; ++i)
  {
    std::string peppers;
    std::cin >> peppers;

    if (peppers == "Poblano")
      t += 1500;
    else if (peppers == "Mirasol")
      t += 6000;
    else if (peppers == "Serrano")
      t += 15500;
    else if (peppers == "Cayenne")
      t += 40000;
    else if (peppers == "Thai")
      t += 75000;
    else if (peppers == "Habanero")
      t += 125000;
  }

  std::cout << t << '\n';

  return 0;
}
