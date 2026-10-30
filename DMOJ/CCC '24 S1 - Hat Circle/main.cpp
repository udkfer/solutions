#include <iostream>
#include <vector>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<int> h(n);
  for(int i{}; i < n; ++i)
  {
    std::cin >> h[i];
  }

  int half = n / 2;
  int count{};

  for(int i{}; i < half; ++i)
  {
    if(h[i] == h[i+half])
      count += 2;
  }

  std::cout << count << '\n';

  return 0;
}
