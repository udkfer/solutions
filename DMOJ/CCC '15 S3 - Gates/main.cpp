#include <iostream>
#include <vector>

int find(std::vector<int>& parent, int x)
{
  if (parent[x] == x)
    return x;

  return parent[x] = find(parent, parent[x]);
}

int main()
{
  int g{}, p{};
  std::cin >> g >> p;

  std::vector<int> wishes(p);
  for(int i{}; i < p; ++i)
  {
    std::cin >> wishes[i];
  }


  std::vector<int> parent(g + 1);
  for (int i = 0; i <= g; ++i)
    parent[i] = i;
  int landed = 0;
  for (int w : wishes)
  {
    int gate = find(parent, w);
    if (gate == 0)
      break;

    parent[gate] = gate - 1;
    ++landed;
  }

  std::cout << landed << '\n';

  return 0;
}
