#include <iostream>

int main()
{
  int a{}, b{};
  std::cin >> a >> b;

  int rev_a{}, rev_b{};
  for(int i{}; i < 3; ++i)
  {
    rev_a = (rev_a * 10) + (a % 10); 
    a /= 10;

    rev_b = (rev_b * 10) + (b % 10); 
    b /= 10;
  }

  if(rev_a > rev_b)
    std::cout << rev_a << '\n';
  else
    std::cout << rev_b << '\n';

  return 0;
}
