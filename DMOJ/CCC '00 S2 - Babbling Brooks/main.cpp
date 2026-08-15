#include <iostream>
#include <vector>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<double> streams(n);
  for(int i{}; i < n; ++i)
  {
    std::cin >> streams[i];
  }

  while (true)
  {
    int cmd{};
    std::cin >> cmd;

    if (cmd == 77)
    {
      break;
    }
    else if (cmd == 99)
    {
      int a{}, b{};
      std::cin >> a >> b;

      int i = a - 1;
      double left  = streams[i] * b / 100.0;
      double right = streams[i] - left;
      streams[i] = left;
      streams.insert(streams.begin() + i + 1, right);
    }
    else if (cmd == 88)
    {
      int a{};
      std::cin >> a;

      int i = a - 1;
      streams[i] += streams[i + 1];
      streams.erase(streams.begin() + i + 1);
    }
  }

  for (double x : streams) std::cout << x << ' ';
  std::cout << '\n';

  return 0;
}
