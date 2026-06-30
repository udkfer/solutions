#include <iostream>

int main()
{
  int grid[4][4];

  for (int row{}; row < 4; ++row)
  {
    for (int col{}; col < 4; ++col)
    {
      std::cin >> grid[row][col];
    }
  }

  int targetSum = grid[0][0] + grid[0][1] + grid[0][2] + grid[0][3];

  for (int row{}; row < 4; ++row)
  {
    int rowSum{};
    rowSum = grid[row][0] + grid[row][1] + grid[row][2] + grid[row][3];

    if(rowSum != targetSum)
    {
      std::cout << "not magic\n";
      return 0;
    }
  }

  for (int col{0}; col < 4; ++col)
  {
    int colSum{};
    colSum = grid[0][col] + grid[1][col] + grid[2][col] + grid[3][col];

    if(colSum != targetSum)
    {
      std::cout << "not magic\n";
      return 0;
    }
  }

  std::cout << "magic\n";

  return 0;
}
