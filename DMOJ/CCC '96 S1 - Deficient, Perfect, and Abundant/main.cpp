#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  for(int i{}; i < n; ++i)
  {
    int value{};
    std::cin >> value;

    int sum{};
    for(int j = 1; j < value; ++j)
    {
      if(value % j == 0)
        sum += j;
    }

    if(sum < value)
      std::cout << value << " is a deficient number.\n";
    else if(sum == value)
      std::cout << value << " is a perfect number.\n";
    else
      std::cout << value << " is an abundant number.\n";
  }
  return 0;
}
