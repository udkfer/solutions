#include <iostream>
#include <vector>
#include <queue>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<std::vector<int>> adj(n+1);
  for(int i = 1; i <= n; ++i)
  {
    int m{};
    std::cin >> m;

    for(int j{}; j < m; ++j)
    {
      int dest{};
      std::cin >> dest;
      adj[i].push_back(dest);
    }
  }

  std::vector<int> dist(n+1, -1);
  dist[1] = 1;
  std::queue<int> q; q.push(1);

  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v : adj[u]) {
      if (dist[v] == -1) {
        dist[v] = dist[u] + 1;
        q.push(v);
      }
    }
  }

  bool all_reachable = true;
  int best = n + 5;
  for(int i = 1; i <=n; ++i) {
    if (dist[i]==-1) all_reachable = false;

    if (adj[i].empty() && dist[i] != -1) {
      if (dist[i] < best) best = dist[i];
    }
  }

  std::cout << (all_reachable ? "Y\n" : "N\n");
  std::cout << best << "\n";

  return 0;
}
