#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<double> real_numbers{};

  for(int i{}; i < n; ++i)
  {
    double current{};
    std::cin >> current;
    real_numbers.push_back(current);
  }

  int biggest{};

  for(int i{}; i < n; ++i)
  {
    if(real_numbers[i] > real_numbers[biggest])
    {
      biggest = i;
    }
  }

  for(int i{}; i < n; ++i)
  {
    if (i == biggest) {
      continue;
    }
     
    std::cout << std::fixed << std::setprecision(2);
    std::cout << real_numbers[i] << '\n';
  }

  std::cout << std::fixed << std::setprecision(2);
  std::cout << real_numbers[biggest] << '\n';

  return 0;
}
