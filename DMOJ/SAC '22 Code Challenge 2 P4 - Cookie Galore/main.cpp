#include <iostream>
#include <vector>
#include <string>
#include <deque>

int main()
{
  int n{}, m{};
  std::cin >> n >> m;

  int cookies{};
  std::vector<std::string> cells(n);
  for(int i{}; i < n; ++i)
  {
    std::cin >> cells[i];
  }

  std::vector<std::vector<int>> dist(n, std::vector<int>(m, 1e9));

  dist[0][0] = (cells[0][0] == 'C') ? 1 : 0;

  std::deque<std::pair<int,int>> dq;
  dq.push_front({0, 0});

  int row_directions[] = {0, 1, 0, -1};
  int col_directions[] = {1, 0, -1, 0};

  while (!dq.empty()) {
    auto [row, col] = dq.front();
    dq.pop_front();

    for (int i = 0; i < 4; ++i) {
      int nextRow = row + row_directions[i];
      int nextCol = col + col_directions[i];

      if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= m)
        continue;

      int newCost = dist[row][col] + (cells[nextRow][nextCol] == 'C' ? 1 : 0);

      if (newCost < dist[nextRow][nextCol]) {
        dist[nextRow][nextCol] = newCost;

        if (cells[nextRow][nextCol] == 'C')
          dq.push_back({nextRow, nextCol});
        else
          dq.push_front({nextRow, nextCol});
      }
    }
  }

  std::cout << cookies;

  return 0;
}
