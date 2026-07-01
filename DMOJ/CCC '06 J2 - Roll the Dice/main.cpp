#include <iostream>

int main()
{
  int m{}, n{};
  std::cin >> m >> n;

  int counter{};

  for(int i = 1;i <= m; ++i)
  {
    for(int j = 1;j <= n; ++j)
    {
      switch(i + j)
      {
        case 10:
          ++counter;
          break;
      }
    }
  }

  switch(counter)
  {
    case 1:
      std::cout << "There is 1 way to get the sum 10.\n";
      break;
    default:
      std::cout << "There are " << counter << " ways to get the sum 10.\n";
  }

  return 0;
}
