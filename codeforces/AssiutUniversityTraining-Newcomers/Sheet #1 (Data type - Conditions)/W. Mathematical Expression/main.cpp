#include <iostream>

int main()
{
  int a{}, b{};
  long long c{};
  char s{}, q{};
  std::cin >> a >> s >> b >> q >> c;

  switch(s)
  {
    case '+':

      if((a + b) == c)
        std::cout << "Yes" << '\n';
      else
        std::cout << a + b << '\n';

      break;

    case '-':

      if((a - b) == c)
        std::cout << "Yes" << '\n';
      else
        std::cout << a - b << '\n';

      break;

    case '*':

      if((a * b) == c)
        std::cout << "Yes" << '\n';
      else
        std::cout << a * b << '\n';

      break;

    case '/':

      if((a / b) == c)
        std::cout << "Yes" << '\n';
      else
        std::cout << a / b << '\n';

      break;
  }

  return 0;
}
