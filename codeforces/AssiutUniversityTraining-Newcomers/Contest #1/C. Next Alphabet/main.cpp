#include <iostream>

int main()
{
  char a{};
  std::cin >> a;

  if(a == 122)
    a = 96;

  std::cout << (char)(a + 1) << '\n';

  return 0;
}
