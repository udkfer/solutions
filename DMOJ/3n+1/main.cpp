#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int count{};

  while (n != 1)
  {
    if(n % 2 == 0)
      n /= 2;
    else
      n = 3*n + 1;

    ++count;
  }

  std::cout << count;

  return 0;
}
