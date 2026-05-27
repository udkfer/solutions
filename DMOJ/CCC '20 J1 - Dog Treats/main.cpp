#include <iostream>

int main()
{
  int s{}, m{}, l{};
  std::cin >> s >> m >> l;

  int h = ((1 * s) + (2 * m) + (3 * l));

  if(h >= 10)
    std::cout << "happy\n";
  else
    std::cout << "sad\n";

  return 0;
}
