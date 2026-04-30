#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int m{};
  while(m < n)
  {
    ++m;
    int l{};
    std::cin >> l;

    if(l > 0)
    {
      int j = l;
      while (j > 0) {
        j = j / 10;

        int k = (l % 10);
        l = l / 10;
        std::cout << k << ' ';
      }
    }
    else
      std::cout << l;

    std::cout << '\n';
  }

  return 0;
}

