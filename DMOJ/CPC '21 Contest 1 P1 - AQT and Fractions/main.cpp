#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int t{};
  std::cin >> t;

  std::vector<long long> a(t);
  std::vector<long long> b(t);

  for(int i{}; i < t; ++i)
  {
    std::cin >> a[i] >> b[i];
  }


  for(int i{}; i < t; ++i)
  {

    long long b_save = b[i];

    while(b[i] != 0)
    {
      long long temp = b[i];
      b[i] = a[i] % b[i];
      a[i] = temp;
    }

    long long simp_deno = b_save / a[i];

    long long counter2{}, counter5{};

    while(simp_deno % 2 == 0)
    {
      ++counter2;
      simp_deno /= 2;
    }

    while(simp_deno % 5 == 0)
    {
      ++counter5;
      simp_deno /= 5;
    }

    if(simp_deno != 1)
      std::cout << "-1\n";
    else
    {
      std::cout << std::max(counter2, counter5) << '\n';
    }

  }

  return 0;
}
