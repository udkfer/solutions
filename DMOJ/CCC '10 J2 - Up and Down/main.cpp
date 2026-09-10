#include <iostream>

int main()
{
  int a{}, b{}, c{}, d{}, s{};
  std::cin >> a >> b >> c >> d >> s;

  int cycle = a + b;
  int full = s / cycle;
  int rem = s % cycle;
  int pos = full * (a - b);

  if(rem <= a)
    pos += rem;
  else
    pos += a - (rem - a);

  int nikky = pos;

  int cycleB = c + d;
  int fullB = s / cycleB;
  int remB = s % cycleB;
  int posB = fullB * (c - d);

  if(remB <= c)
    posB += remB;
  else
    posB += c - (remB - c);

  int byron = posB;

  if(nikky > byron)
    std::cout << "Nikky\n";
  else if(byron > nikky)
    std::cout << "Byron\n";
  else
    std::cout << "Tied\n";

  return 0;
}
