#include <iostream>
#include <queue>

bool adj[50][50] = {false};

void makeFriends(int x, int y)
{
  adj[x][y] = true;
  adj[y][x] = true;
}

void deleteFriends(int x,int y)
{
  adj[x][y] = false;
  adj[y][x] = false;
}

int main()
{
  makeFriends(1, 6);
  makeFriends(2, 6);
  makeFriends(3, 4);
  makeFriends(3, 5);
  makeFriends(3, 6);
  makeFriends(3, 15);
  makeFriends(4, 5);
  makeFriends(4, 6);
  makeFriends(5, 6);
  makeFriends(6, 7);
  makeFriends(7, 8);
  makeFriends(8, 9);
  makeFriends(9, 10);
  makeFriends(9, 12);
  makeFriends(10, 11);
  makeFriends(11, 12);
  makeFriends(12, 13);
  makeFriends(13, 14);
  makeFriends(13, 15);
  makeFriends(16, 17);
  makeFriends(16, 18);
  makeFriends(17, 18);

  char cmd;
  while (std::cin >> cmd && cmd != 'q')
  {
    if (cmd == 'i')
    {
      int x, y;
      std::cin >> x >> y;
      makeFriends(x, y);
    }
    else if (cmd == 'd')
    {
      int x, y;
      std::cin >> x >> y;
      deleteFriends(x, y);
    }
    else if (cmd == 'n') {
      int x;
      std::cin >> x;

      int cnt{};

      for (int i = 1; i < 50; ++i)
        if (adj[x][i])
          ++cnt;

      std::cout << cnt << "\n";
    }
    else if (cmd == 'f')
    {
      int x;
      std::cin >> x;

      bool seen[50] = {};

      for (int z = 1; z < 50; ++z)
        if (adj[x][z])
        {
          for (int y = 1; y < 50; ++y)
            if (adj[z][y])
            {
              if (y != x && !adj[x][y])
                seen[y] = true;
            }
        }

      int cnt{};
      for (int i = 1; i < 50; ++i)
        if (seen[i])
          ++cnt;

      std::cout << cnt << "\n";
    }
    else if (cmd == 's')
    {
      int x, y;
      std::cin >> x >> y;

      int dist[50];
      for (int i{}; i < 50; ++i) dist[i] = -1;
      dist[x] = 0;

      std::queue<int> q;
      q.push(x);

      while (!q.empty())
      {
        int cur = q.front(); q.pop();

        for (int nxt = 1; nxt < 50; ++nxt)
          if (adj[cur][nxt] && dist[nxt] == -1)
          {
            dist[nxt] = dist[cur] + 1;
            q.push(nxt);
          }
      }

      if (dist[y] == -1)
        std::cout << "Not connected\n";
      else
        std::cout << dist[y] << "\n";
    }
  }

  return 0;
}
