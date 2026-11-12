#include <iostream>
#include <vector>

int main()
{
  int n{}, m{}, a{}, b{};
  std::cin >> n >> m >> a >> b;

  std::vector<std::vector<int>> adj(n+1);

  for(int i{}; i < m; ++i)
  {
    int x{}, y{};
    std::cin >> x >> y;

    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  std::vector<bool> visited(n+1, false);

  std::vector<int> st;
  st.push_back(a);
  while (!st.empty())
  {
    int u = st.back();
    st.pop_back();

    if (visited[u])
      continue;

    visited[u] = true;

    for(int v : adj[u])
    {
      if(!visited[v])
        st.push_back(v);
    }
  }

  if(visited[b])
    std::cout << "GO SHAHIR!\n";
  else
    std::cout << "NO SHAHIR!\n";

  return 0;
}
