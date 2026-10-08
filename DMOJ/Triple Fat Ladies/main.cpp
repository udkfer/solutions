#include <iostream>

bool cubeEndsIn888(long long n)
{
  return (n * n * n) % 1000 == 888;
}

int main()
{
  int t{};
  std::cin >> t;

  for(int i{}; i < t; ++i)
  {
    int k{};
    std::cin >> k;

    long long n = k+1;
    while(!cubeEndsIn888(n))
      ++n;

    std::cout << n << "\n";
  }

  return 0;
}
