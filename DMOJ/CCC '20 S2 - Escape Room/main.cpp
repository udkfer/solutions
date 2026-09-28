#include <iostream>
#include <vector>
#include <cstdlib>

int m{}, n{};
int grid[1005][1005];
std::vector<int> adj[1000005];
bool visited[1000005];

void dfs(int x)
{
  if (visited[x]) return;          // bail out if we've been here

  if (x == m * n) {                // win?
    std::cout << "yes\n";
    std::exit(0);
  }

  visited[x] = true;               // remember this number

  for (int y : adj[x])             // follow every arrow out
    dfs(y);                        // recurse
}

int main()
{
  std::cin >> m >> n;

  for(int i = 1; i <= m; ++i)
  {
    for(int j = 1; j <= n; ++j)
    {
      std::cin >> grid[i][j];
      adj[i * j].push_back(grid[i][j]);
    }
  }

  dfs(grid[1][1]);
  std::cout << "no\n";
  return 0;
}
