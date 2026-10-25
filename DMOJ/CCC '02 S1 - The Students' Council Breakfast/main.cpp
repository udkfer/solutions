#include <iostream>

int main()
{
  int pink{}, green{}, red{}, orange{}, money{};
  std::cin >> pink >> green >> red >> orange >> money;

  int total{};
  int minTickets = money;

  for (int i{}; i <= money / pink; ++i)
  {
    for (int j{}; j <= money / green; ++j)
    {
      for (int k{}; k <= money / red; ++k)
      {
        for (int l{}; l <= money / orange; ++l)
        {
          if(i * pink + j * green + k * red + l * orange == money)
          {
            std::cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << l << '\n';

            ++total;

            int tickets = i + j + k + l;

            if (tickets < minTickets)
            {
              minTickets = tickets;
            }
          }
        }
      }
    }
  }

  std::cout << "Total combinations is " << total << ".\n";
  std::cout << "Minimum number of tickets to print is " << minTickets << ".\n";

  return 0;
}
