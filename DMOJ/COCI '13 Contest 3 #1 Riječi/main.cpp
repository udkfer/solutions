#include <iostream>

int main()
{
  int k{};
  std::cin >> k;

  long long a = 1, b{};

  for (int i = 0; i < k; ++i) 
  {
    long long new_a = b;
    long long new_b = a + b;
    a = new_a;
    b = new_b;
  }

  std::cout << a << ' ' << b << '\n';

  return 0;
}
