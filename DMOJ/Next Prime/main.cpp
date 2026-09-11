#include <iostream>

bool isPrime(int n) {
  if(n <= 1)
    return false;

  for (int i = 2; (long long)i * i <= n; ++i)
  {
    if(n % i == 0)
      return false;
  }
  return true;

}

int main()
{
  int n{};
  std::cin >> n;

  if(n <= 2)
  {
    std::cout << "2\n";
    return 0;
  }
  else if(n % 2 ==0)
    ++n;

  while(!isPrime(n))
    n += 2;

  std::cout << n << '\n';

  return 0;
}
