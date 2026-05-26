#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int a{}, d{};
  int as = 100, ds = 100;

  int c{};
  while(c < n)
  {
    std::cin >> a >> d;

    if(a > d)
      ds = ds - a;
    else if(a < d)
      as = as - d;

    ++c;
  }

  std::cout << as << '\n' << ds << '\n';

  return 0;
}
