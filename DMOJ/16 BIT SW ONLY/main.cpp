#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int a{}, b{};
  long long p{};

  for(int i{}; i < n; ++i)
  {
    std::cin >> a >> b >> p;

    if((long long)a * b != p)
      std::cout << "16 BIT S/W ONLY\n";
    else
      std::cout << "POSSIBLE DOUBLE SIGMA\n";
  }

  return 0;
}
