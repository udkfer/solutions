#include <iostream>
#include <vector>

int main()
{
  bool adj[8][8] = {};
  int indeg[8] = {};

  auto addEdge = [&](int x, int y)
  {
    if (!adj[x][y])
    {
      adj[x][y] = true;
      ++indeg[y];
    }
  };

  addEdge(1,7);
  addEdge(1,4);
  addEdge(2,1);
  addEdge(3,4);
  addEdge(3,5);

  int x, y;
  while (std::cin >> x >> y)
  {
    if (x == 0 && y == 0)
      break;

    addEdge(x,y);
  }

  bool done[8]={};
  std::vector<int> ans;


  for (int k{}; k < 7; ++k)
  {
    int u{};
    for (int i = 1; i <= 7; ++i)
    {
      if (!done[i] && indeg[i] == 0)
      {
        u = i;
        break;
      }
    }

    if (u == 0)
      break;

    done[u] = true;
    ans.push_back(u);

    for (int v = 1; v <= 7; ++v)
    {
      if (adj[u][v])
        --indeg[v];
    }

  }

  if (ans.size() < 7)
    std::cout << "Cannot complete these tasks. Going to bed.\n";
  else
  {
    for (int i = 0; i < 7; ++i)
    {
      if (i)
        std::cout << ' ';

      std::cout << ans[i];
    }
    std::cout << '\n';
  }

  return 0;
}
