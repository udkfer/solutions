#include <iostream>
#include <vector>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<std::vector<int>> adj(n+1);

  while(true)
  {
    int x{}, y{};
    std::cin >> x >> y;

    if(x == 0 && y == 0)
      break;

    adj[x].push_back(y);
  }

  std::vector<int> ways(n+1, 0);
  ways[n] = 1;

  for (int i = n - 1; i >= 1; --i)
  {
    for (int nxt : adj[i])
      ways[i] += ways[nxt];
  }

  std::cout << ways[1] << '\n';

  return 0;
}
