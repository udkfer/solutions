#include <iostream>
#include <vector>

bool isChampion(int fav, int pts[5])
{
  for(int i = 1; i <= 4; ++i)
  {
    if(i == fav)
      continue;
    if(pts[i] >= pts[fav])
      return false;
  }
  return true;
}

void dfs(int idx, int fav, int pts[5],
    std::vector<std::pair<int,int>> &rem, int &answer)
{
  if(idx == rem.size())
  {
    if(isChampion(fav, pts))
      answer++;

    return;
  }

  int a = rem[idx].first, b = rem[idx].second;

  pts[a] += 3;
  dfs(idx+1, fav, pts, rem, answer);
  pts[a] -= 3;

  pts[b]+=3;
  dfs(idx+1, fav, pts, rem, answer);
  pts[b]-=3;

  ++pts[a];
  ++pts[b];
  dfs(idx+1, fav, pts, rem, answer);
  --pts[a];
  --pts[b];
}

int main()
{
  int t{}, g{};
  std::cin >> t >> g;

  int points[5] = {};
  bool played[5][5] = {};

  for(int i{}; i < g; ++i)
  {
    int a{}, b{}, sa{}, sb{};
    std::cin >> a >> b >> sa >> sb;

    played[a][b] = played[b][a] = true;

    if(sa > sb)
      points[a] += 3;
    else if(sa < sb)
      points[b] += 3;
    else
    {
      points[a] += 1;
      points[b] += 1;
    }
  }

  std::vector<std::pair<int,int>> remaining{};

  for (int a = 1; a <= 4; ++a)
    for (int b = a + 1; b <= 4; ++b)
      if (!played[a][b])
        remaining.push_back({a, b});

  int answer{};
  dfs(0, t, points, remaining, answer);
  std::cout << answer << '\n';

  return 0;
}
