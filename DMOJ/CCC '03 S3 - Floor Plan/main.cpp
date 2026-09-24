#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int dfs(int row, int col, const std::vector<std::string> &grid, std::vector<std::vector<bool>> &visited) {
  int r = grid.size(), c = grid[0].size();
  if(row < 0 || col < 0 || row >= r || col >= c)
    return 0;
  else if(grid[row][col] == 'I')
    return 0;
  else if(visited[row][col])
    return 0;
  else
  {
    visited[row][col] = true;
    return 1 + dfs(row-1,col,grid,visited)
      + dfs(row+1,col,grid,visited)
      + dfs(row,col-1,grid,visited)
      + dfs(row,col+1,grid,visited);
  }

}

int main()
{
  int squaremeters{}, r{}, c{};
  std::cin >> squaremeters >> r >> c;

  std::vector<std::string> grid(r);
  for(int i{}; i < r; ++i)
  {
    std::cin >> grid[i];
  }

  std::vector<std::vector<bool>> visited(r, std::vector<bool>(c,false));
  std::vector<int> rooms;

  for(int i{}; i < r; ++i) {
    for(int j{}; j < c; ++j) {
      if (grid[i][j] == '.' && visited[i][j] == false)
      {
        int size = dfs(i,j,grid,visited);
        rooms.push_back(size);
      }
    }
  }

  sort(rooms.begin(), rooms.end(), std::greater<int>());
  int count{};
  for(int size : rooms)
  {
    if(squaremeters >= size)
    {
      squaremeters -= size;
      ++count;
    }
    else
      break;
  }

  if (count == 1)
    std::cout << "1 room, " << squaremeters << " square metre(s) left over\n";
  else
    std::cout << count << " rooms, " << squaremeters << " square metre(s) left over\n";

  return 0;
}
