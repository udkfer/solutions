#include <iostream>

int main()
{
  long long l1{}, r1{}, l2{}, r2{};
  std::cin >> l1 >> r1 >> l2 >> r2;

  if(l1 >= l2 && l1 <= r2)
    std::cout << l1 << ' ';
  else if(l2 >= l1 && l2 <= r1)
    std::cout << l2 << ' ';

  if(r1 >= l2 && r1 <= r2)
    std::cout << r1 << '\n';
  else if(r2 >= l1 && r2 <= r1)
    std::cout << r2 << '\n';
  else
    std::cout << "-1\n";

  return 0;
}
