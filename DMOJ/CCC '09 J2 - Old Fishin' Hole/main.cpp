#include <iostream>

int main()
{
  int a{}, b{}, c{}, d{};
  std::cin >> a >> b >> c >> d;

  int ways{};
  for(int i{}; i <= d; ++i)
  {
    for(int j{}; j <= d; ++j)
    {
      for(int k{}; k <= d; ++k)
      {
        if((((i * a)   +   (j * b)   +   (k * c)) <= d) && (i + j + k > 0))
        {
          std::cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel\n";
          ++ways;
        }
      }
    }
  }

  std::cout << "Number of ways to catch fish: " << ways << "\n";

  return 0;
}
