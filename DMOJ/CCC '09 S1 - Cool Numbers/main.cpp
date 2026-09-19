#include <iostream>

int main()
{
  int a{}, b{};
  std::cin >> a >> b;


  int count{};

  for(int k = 1; ; ++k)
  {
    long long p = (long long)k*k*k*k*k*k;
    if(p > b)
      break;
    if(p >= a)
      ++count;
  }

  std::cout << count << '\n';

  return 0;
}
