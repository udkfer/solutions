#include <iostream>

int main()
{
  int n{}, k{};
  std::cin >> n >> k;

  int m = n;
  int c{};
  while(c < k)
  {
    n = n * 10;
    m = m + n;
    ++c;
  }

  std::cout << m << '\n';

  return 0;
}
