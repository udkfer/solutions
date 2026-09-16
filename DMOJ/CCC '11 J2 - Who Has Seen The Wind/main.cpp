#include <iostream>

int main()
{
  int h{}, m{};
  std::cin >> h >> m;

  int first{};
  for(int t = 1; t <= m; ++t)
  {
    int a = (-6 * (t * t * t * t)) + (h * (t * t * t)) + (2 * (t * t)) + t;
    if (a <= 0) {
      first = t;
      break;
    }

  }

  if(first == 0)
    std::cout << "The balloon does not touch ground in the given time.\n";
  else
  {
    std::cout << "The balloon first touches ground at hour:\n";
    std::cout << first << '\n';
  }

  return 0;
}
