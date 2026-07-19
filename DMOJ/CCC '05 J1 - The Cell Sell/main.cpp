#include <iostream>
#include <iomanip>
#include <algorithm>

int main()
{
  int daytime{}, evening{}, weekend{};
  std::cin >> daytime >> evening >> weekend;

  double planA{}, planB{};

  planA = ((std::max(0.0, static_cast<double>(daytime - 100)) * .25) + (evening * .15) + ( weekend * .20)); 
  planB = ((std::max(0.0, static_cast<double>(daytime - 250)) * .45) + (evening * .35) + ( weekend * .25)); 

  std::cout << std::fixed << std::setprecision(2) << "Plan A costs " << planA << '\n' << "Plan B costs " << planB << '\n';

  if(planA == planB)
    std::cout << "Plan A and B are the same price.\n";
  else if(planA < planB)
    std::cout << "Plan A is cheapest.\n";
  else
    std::cout << "Plan B is cheapest.\n";

  return 0;
}
