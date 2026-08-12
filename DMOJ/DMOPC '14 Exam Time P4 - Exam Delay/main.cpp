#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
#include <climits>


int main()
{
  int v{}, e{};
  std::cin >> v >> e;

  std::vector<std::vector<std::tuple<int,int,int>>> adj(v + 1);

  for(int i{}; i < e; ++i)
  {
    int m{}, n{}, d{}, s{};
    std::cin >> m >> n >> d >> s;
    adj[m].push_back({n, d, s});
    adj[n].push_back({m, d, s});
  }

  std::vector<std::pair<double, int>> dist(v + 1, {1e18, INT_MAX});
  dist[1] = {0.0, 0};

  using State = std::tuple<double, int, int>;
  std::priority_queue<State, std::vector<State>, std::greater<State>> pq;
  pq.push({0.0, 0, 1});

  while(!pq.empty())
  {
    auto [time, edges, u] = pq.top();
    pq.pop();

    if(std::make_pair(time, edges) > dist[u]) continue;

    for(auto [v, d, s] : adj[u])
    {
      double edge_time = static_cast<double>(d) / s; // hours
      double new_time = time + edge_time;
      int new_edges = edges + 1;

      if(std::make_pair(new_time, new_edges) < dist[v])
      {
        dist[v] = {new_time, new_edges};
        pq.push({new_time, new_edges, v});
      }
    }
  }

  std::cout << dist[v].second << "\n";
  std::cout << static_cast<int>(dist[v].first * 60 / 3 + 0.5) << "\n";

  return 0;
}
