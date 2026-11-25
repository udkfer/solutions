#include <iostream>

int main()
{
  int a{}, b{}, c{}, d{};
  std::cin >> a >> b >> c >> d;

  bool needSugar = a < b;
  bool needPaste = c < d;

  if (needSugar && needPaste)
  {
    std::cout << "Go to the department store\n";
  }
  else if (needSugar)
  {
    std::cout << "Go to the grocery store\n";
  }
  else if (needPaste)
  {
    std::cout << "Go to the pharmacy\n";
  }
  else
  {
    std::cout << "Stay home\n";
  }

  return 0;
}
