#include <iostream>

int main()
{
  unsigned long long a{}, b{}, k{};
  std::cin >> a >> b >> k;

  if((a % k) == 0 && (b % k) == 0)
    std::cout << "Both\n";
  else if((a % k) == 0)
    std::cout << "Memo\n";
  else if((b % k) == 0)
    std::cout << "Momo\n";
  else
    std::cout << "No One\n";

  return 0;
}
