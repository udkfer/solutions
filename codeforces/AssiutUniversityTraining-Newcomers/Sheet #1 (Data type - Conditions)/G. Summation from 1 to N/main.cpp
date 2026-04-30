#include <iostream>

int main()
{
  long long n {};
  std::cin >> n;
  long long gauss = n*(n+1)/2;

  std::cout << gauss << '\n';

  return 0;
}
