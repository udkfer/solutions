#include <iostream>

int main()
{
  int t{};
  std::cin >> t;

  int s{};
  while(s < t)
  {
    ++s;
    int x{}, y{};
    std::cin >> x >> y;

    int k{};
    int j{};

    if(x < y)
    {
      k = x + 1;
      j = y;
    }
    else
    {
      k = y + 1;
      j = x;
    }

    int i{};

    while(k < j)
    {
      if((k % 2) != 0) 
      {
        i = i + k;
      }
      ++k;
    }

    std::cout << i << '\n';
  }

  return 0;
}

