#include <iostream>

int main()
{
  int start{}, end{};
  std::cin >> start >> end;

  int x{};
  for(int n = start; n <= end; ++n)
  {
    int divisors{};
    for(int i = 1; i <= n; ++i)
    {
      if (n % i == 0)
        ++divisors;

    }

    if(divisors == 4)
      ++x;
  }

  std::cout << "The number of RSA numbers between " << start << " and " << end << " is " << x << '\n';

  return 0;
}
