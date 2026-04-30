#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m{};

  if(n > 1)
    while (m < n)
    {
      ++m;

      if((m % 2) == 0)
      {
        std::cout << m << '\n';
      }
    }
  else
    std::cout << "-1" << '\n';


  return 0;
}
