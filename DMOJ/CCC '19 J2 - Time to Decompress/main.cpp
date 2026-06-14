#include <iostream>

int main()
{
  int l{};
  std::cin >> l;

  for(int i{}; i < l; ++i)
  {
    int n{};
    char s{};
    std::cin >> n >> s;

    std::cout << '\n';

    for(int i{}; i < n; ++i)
    {
      std::cout << s;
    }
  }

  return 0;
}
