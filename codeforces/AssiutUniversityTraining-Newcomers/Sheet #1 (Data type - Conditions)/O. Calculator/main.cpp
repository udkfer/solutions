#include <iostream>

int main()
{
  int a{};
  std::cin >> a;
  char x{};
  std::cin >> x;
  int b{};
  std::cin >> b;
  long long y{};

  switch(x)
  {
    case '+' :
      y = a + b;
      break;
    case '-' :
      y = a - b;
      break;
    case '*' :
      y = a * b;
      break;
    case '/' :
      y = a / b;
      break;
  }

  std::cout << y << '\n';

  return 0;
}
