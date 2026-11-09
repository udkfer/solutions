#include <iostream>
#include <string>
#include <vector>
#include <queue>

bool canReach(const std::vector<std::vector<std::pair<int,int>>>& adj, int banned)
{
  std::vector<bool> seen(26, false);
  std::queue<int> q;

  seen[0] = true;
  q.push(0);

  while (!q.empty())
  {
    int u = q.front();
    q.pop();

    if (u == 1) return true;

    for (auto [v, id] : adj[u])
    {
      if (id == banned) continue;
      if (seen[v]) continue;
      seen[v] = true;
      q.push(v);
    }
  }
  return false;
}

int main()
{
  std::vector<std::pair<int,int>> edges;

  while(true)
  {
    std::string s;
    std::cin >> s;
    if (s == "**") break;
    int u = s[0] - 'A';
    int v = s[1] - 'A';
    edges.emplace_back(u, v);
  }

  std::vector<std::vector<std::pair<int,int>>> adj(26);

  for (int i{}; i < (int)edges.size(); ++i) {
    int u = edges[i].first;
    int v = edges[i].second;
    adj[u].push_back({v, i});
    adj[v].push_back({u, i});
  }

  int count{};
  for (int i{}; i < (int)edges.size(); ++i)
  {
    if (!canReach(adj, i))
    {
      std::cout << char('A' + edges[i].first)
        << char('A' + edges[i].second) << '\n';
      ++count;
    }
  }
  std::cout << "There are " << count << " disconnecting roads.\n";

  return 0;
}
