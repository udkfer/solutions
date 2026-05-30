#include <iostream>

int main()
{
  int p{}, n{}, r{};
  std::cin >> p >> n >> r;

  int t{};
  int ti = n;
  int ni = n;
  while(ti <= p)
  {
    ni = ni * r;
    ti = ti + ni;

    ++t;
  }

  std::cout << t << '\n';

  return 0;
}
