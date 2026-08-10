#include <iostream>
#include <vector>

int main()
{
  int n{}, m{};
  std::cin >> n >> m;

  std::vector<std::vector<int>> adj(1000);

  for(int i{}; i < m; ++i)
  {
    int a{}, b{};
    std::cin >> a >> b;

    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int carbons{}, hydrogens{};
  bool isCarbon[1001]{};

  for(int i = 1; i <= n; ++i)
  {
    int degree = adj[i].size();

    if(degree == 1)
      hydrogens++;
    else if(degree == 4)
    {
      carbons++;
      isCarbon[i] = true;
    }
    else
    {
      std::cout << "Impossible\n";
      return 0;
    }
  }

  int totalEnergy = hydrogens * 413;

  for(int i = 1; i <= n; ++i)
  {
    bool visited[1001]{};
    for(int j : adj[i])
    {
      if(i < j && isCarbon[i] && isCarbon[j] && !visited[j])
      {
        visited[j] = true;
        int count{};
        for(int k : adj[i])
          if(k == j) count++;

        if(count == 1)
          totalEnergy += 346;
        else
          totalEnergy += 615;
      }
    }
  }


  std::cout << totalEnergy << "\n";

  std::cout << "C";

  if(carbons > 1) std::cout << carbons;
  std::cout << "H";

  if(hydrogens > 1) std::cout << hydrogens;
  std::cout << "\n";

  return 0;
}
