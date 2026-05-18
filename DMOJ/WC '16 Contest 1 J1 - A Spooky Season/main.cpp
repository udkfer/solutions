#include <iostream>

int main()
{
  int s{};
  std::cin >> s;

  std::cout << "sp";
  int l{};
  while(l < s)
  {
    std::cout << 'o';
    ++l;
  }
  std::cout << "ky\n";

  return 0;
}
