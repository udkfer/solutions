#include <iostream>
#include <vector>
#include <string>
#include <queue>

int main()
{
  int t{};
  std::cin >> t;

  for(int i{}; i < t; ++i)
  {
    int r{}, c{};
    std::cin >> r >> c;

    std::vector<std::string> grid(r);

    for(int j{}; j < r; ++j)
    {
      std::cin >> grid[j];
    }

    std::vector<std::vector<int>> dist(r, std::vector<int>(c, -1));
    std::queue<std::pair<int,int>> q;

    dist[0][0] = 1;
    q.emplace(0,0);

    while (!q.empty())
    {
      auto [cr, cc] = q.front();
      q.pop();

      char cur = grid[cr][cc];
      std::vector<std::pair<int,int>> dirs;

      if (cur == '+')
        dirs = {{-1,0},{1,0},{0,-1},{0,1}};
      else if (cur == '-')
        dirs = {{0,-1},{0,1}};
      else if (cur == '|')
        dirs = {{-1,0},{1,0}};

      for (auto [dr, dc] : dirs) {
        int nr = cr + dr;
        int nc = cc + dc;

        if (nr < 0 || nr >= r || nc < 0 || nc >= c)
          continue;
        if (grid[nr][nc] == '*')
          continue;
        if (dist[nr][nc] != -1)
          continue;

        dist[nr][nc] = dist[cr][cc] + 1;
        q.emplace(nr, nc);

      }
    }
    std::cout << dist[r-1][c-1] << '\n';
  }

  return 0;
}
