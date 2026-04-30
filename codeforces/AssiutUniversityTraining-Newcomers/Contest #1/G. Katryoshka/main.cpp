#include <iostream>
#include <algorithm>

int main()
{
  unsigned long long n{}, m{}, k{};
  std::cin >> n >> m >> k;

   unsigned long long a{0}, b{0}, c{0};

  if((n > 0) && (m > 0) && (k > 0))
  {
   b = {std::min(std::min(n, m), k)};
   n = n - b;
   m = m - b;
   k = k - b;
  }

  if(n > 1 && k > 0)
  {
   n = n / 2;
   c = {std::min(n, k)};
   n = n - c;
   k = k - c;
  }

  if((n > 1) && (m > 0) && (k > 0))
  {
   n = n / 2;
   a = {std::min(std::min(n, m), k)};
   n = n - a;
   m = m - a;
   k = k - a;
  }

   std::cout << (a + b + c) << '\n';


  return 0;
}
