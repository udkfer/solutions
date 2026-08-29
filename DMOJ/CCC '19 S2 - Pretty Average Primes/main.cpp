#include <iostream>
#include <vector>

bool isPrime(int x)
{
  if(x < 2)
    return false;
  else if(x == 2)
    return true;
  else if((x % 2) == 0)
    return false;

  for(int d = 3; d * d <= x; d += 2)
  {
    if(x % d == 0)
      return false;
  }
  return true;

}

int main()
{
  int t{};
  std::cin >> t;

  std::vector<int> n(t);

  for(int i{}; i < t; ++i)
  {
    std::cin >> n[i];
  }

  for (int i{}; i < t; ++i)
  {
    int N = n[i];
    int a = 3;
    while (true)
    {
      if(isPrime(a) && isPrime(2*N - a))
      {
        std::cout << a << ' ' << (2*N - a) << '\n';
        break;
      }
      a = a + 1;
    }
  }

  return 0;
}
