#include <iostream>
int main()
{
  int w{}, c{};
  std::cin >> w >> c;

  if ((w == 3) && (c >= 94))
    std::cout << "C.C. is absolutely satisfied with her pizza.\n";
  else if ((w == 1) && (c <= 50))
    std::cout << "C.C. is fairly satisfied with her pizza.\n";
  else
    std::cout << "C.C. is very satisfied with her pizza.\n";

  return 0;
}
