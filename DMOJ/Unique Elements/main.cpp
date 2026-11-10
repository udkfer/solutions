#include <iostream>
#include <set>

int main()
{
  int n{};
  std::cin >> n;

  std::set<int> seen;
  for(int i{}; i < n; ++i)
  {
    int x{};
    std::cin >> x;

    seen.insert(x);
  }

  std::cout << seen.size() << '\n';
  return 0;
}
