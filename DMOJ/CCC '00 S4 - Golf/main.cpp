#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int distance{}, clubs{};
  std::cin >> distance >> clubs;

  std::vector<int> clubs_storage(clubs);
  for(int i{}; i < clubs; ++i)
  {
    std::cin >> clubs_storage[i];
  }

  std::vector<int> dp(distance+1, 1e9);
  dp[0] = 0;

  for(int i = 1; i <= distance; ++i)
  {
    for(int j{}; j < clubs_storage.size(); ++j)
    {
      if((i - clubs_storage[j] >= 0) && (dp[i - clubs_storage[j]] != 1e9))
        dp[i] = std::min(dp[i], dp[i-clubs_storage[j]]+1);
    }
  }

  if(dp[distance] == 1e9)
    std::cout << "Roberta acknowledges defeat.\n";
  else
    std::cout << "Roberta wins in " << dp[distance] << " strokes.\n";

  return 0;
}
