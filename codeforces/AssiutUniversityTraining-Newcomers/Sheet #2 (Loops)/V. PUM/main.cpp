#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int k{1};
  int m{1};
  while(m <= n)
  {
    int j{};
    while(j < 4)
    {
      switch(k % 4)
      {
        case 0:
          std::cout << "PUM";
          break;
        default:
          std::cout << k << ' ';
      }
      ++k;
      ++j;
    }
    std::cout << '\n';
    ++m;
  }

  return 0;
}
