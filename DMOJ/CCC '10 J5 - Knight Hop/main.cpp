#include <iostream>
#include <queue>
#include <utility>

int main()
{
  int sx{}, sy{}, tx{}, ty{};
  std::cin >> sx >> sy >> tx >> ty;

  int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
  int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

  int dist[9][9];
  for (int x{}; x < 9; x++)
  {
    for (int y{}; y < 9; y++)
      dist[x][y] = -1;
  }

  dist[sx][sy] = 0;

  std::queue<std::pair<int,int>> q;
  q.push({sx, sy});

  while (!q.empty())
  {
    auto [cx, cy] = q.front(); q.pop();

    for (int i = 0; i < 8; i++) 
    {
      int nx = cx + dx[i];       
      int ny = cy + dy[i];        

      if (nx < 1 || nx > 8 || ny < 1 || ny > 8)
        continue;                  

      if (dist[nx][ny] != -1)
        continue;                   

      dist[nx][ny] = dist[cx][cy] + 1;
      q.push({nx, ny});              
    }
  }

  std::cout << dist[tx][ty] << '\n';

  return 0;
}
