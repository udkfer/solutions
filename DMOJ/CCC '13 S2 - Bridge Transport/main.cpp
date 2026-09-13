#include <iostream>
#include <vector>

int main()
{
  int w{}, n{};
  std::cin >> w >> n;

  std::vector<int> cars(n);

  for(int i{}; i < n; ++i)
  {
    std::cin >> cars[i];
  }

  int current{}, answer{};
  for(int i{}; i < n; ++i)
  {
    current = current + cars[i];
    if (i >= 4) current = current - cars[i-4];

    if(current > w)
      break;
    else
      ++answer;

  }

  std::cout << answer << '\n';

  return 0;
}
