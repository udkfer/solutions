#include <iostream>
#include <vector>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<std::vector<int>> grid(n, std::vector<int>(n));

  for(int i{}; i < n; ++i)
  {
    for(int j{}; j < n; ++j)
    {
      std::cin >> grid[i][j];
    }
  }

  for(int attempt{}; attempt < 4; ++attempt)
  {
    bool valid_grid = true;

    for(int i{}; i < n - 1; ++i)
    {
      for(int j{}; j < n - 1; ++j)
      {
        if((grid[i][j] > grid[i][j+1]) || (grid[i][j] > grid[i+1][j]))
        {
          valid_grid = false;
        }
      }
    }

    if(valid_grid)
    {
      for(int i{}; i < n; ++i)
      {
        for(int j{}; j < n; ++j)
        {
          std::cout << grid[i][j];
          if (j < n - 1) std::cout << " ";
        }
        std::cout << "\n";
      }
      return 0;
    }
    else

    {
      std::vector<std::vector<int>> new_grid(n, std::vector<int>(n));
      new_grid = grid;

      for(int i{}; i < n; ++i)
      {
        for(int j{}; j < n; ++j)
        {
          new_grid[j][n-1-i] = grid[i][j];
        }
      }
      grid = new_grid;
    }
  }

  return 0;
}
