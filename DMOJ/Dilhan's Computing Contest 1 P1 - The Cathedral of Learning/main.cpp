#include <iostream>

int main()
{
  long long n{}, a{}, b{};
  std::cin >> n >> a >> b;


  if((b >= a) && ((b - a) % 2 == 0) &&(a + (b - a) / 2 <= n) && (b - (b - a) / 2 >= 1))
    std::cout << "YES\n";
  else
    std::cout << "NO\n";

  return 0;
}
