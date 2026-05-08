#include <iostream>

int main()
{
  int a{}, b{}, c{}, d{};
  std::cin >> a >> b >> c >> d;

  if((a>7) && (b==c) && (d>7))
    std::cout << "ignore\n";
  else
    std::cout << "answer\n";

  return 0;
}
