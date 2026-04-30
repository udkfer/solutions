#include <iostream>
#include <cstdint>

int main()
{
  std::uint32_t a{}, b{};
  std::cin >> a >> b;

  std::cout << (a ^ b) << '\n';

  return 0;
}
