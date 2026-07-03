#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int swifts[n];
  int semaphores[n];

  for(int i{}; i < n; ++i)
  {
    std::cin >> swifts[i];
  }

  for(int i{}; i < n; ++i)
  {
    std::cin >> semaphores[i];
  }

  int total_swifts{};
  int total_semaphores{};
  int k{};

  for(int i{}; i < n; ++i)
  {
    total_swifts = total_swifts + swifts[i];
    total_semaphores = total_semaphores + semaphores[i];

    if(total_swifts == total_semaphores)
      k = i + 1;

  }

    std::cout << k << '\n';

  return 0;
}
