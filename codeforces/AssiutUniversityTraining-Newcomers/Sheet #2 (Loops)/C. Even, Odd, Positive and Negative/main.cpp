#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int even{};
  int odd{};
  int positive{};
  int negative{};

  int m{};
  while(m < n)
  {
    ++m;

    int l;
    std::cin >> l;

    if(((l % 2) == 0) || ((l % -2) == 0))
    {
      ++even;
    }
    else
      ++odd;

    if(l > 0)
    {
      ++positive;
    }
    else if (l < 0)
      ++negative;

  }

  std::cout << "Even: " << even << '\n';
  std::cout << "Odd: " << odd << '\n';
  std::cout << "Positive: " << positive << '\n';
  std::cout << "Negative: " << negative << '\n';

  return 0;
}
