#include <iostream>

int main()
{
  int m{};
  std::cin >> m;

  int time{};
  bool first = true;
  int pending_W = -1;

  int recv_time[101]{};
  bool seen[101] = {false};
  int total[101]{};
  bool waiting[101] = {false};

  for(int i{}; i < m; ++i)
  {
    char c{};
    int x{};
    std::cin >> c >> x;

    if(c == 'W')
      pending_W = x;
    else if(c == 'R' || c == 'S')
    {
      if(first)
      {
        time = 0;
        first = false;
      }
      else
        time += (pending_W != -1 ? pending_W : 1);

      pending_W = -1;

      if(c == 'R')
      {
        recv_time[x] = time;
        seen[x] = true;
        waiting[x] = true;
      }
      else if(c == 'S')
      {
        total[x] += time - recv_time[x];
        waiting[x] = false;
      }
    }
  }

  for (int x = 1; x <= 100; ++x)
    if (seen[x])
      std::cout << x << ' ' << (waiting[x] ? -1 : total[x]) << '\n';

  return 0;
}
