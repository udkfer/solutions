#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<int> scores;
  for(int i{}; i < n; ++i)
  {
    int score{};
    std::cin >> score;
    scores.push_back(score);
  }

  std::sort(scores.begin(), scores.end(), std::greater<int>());

  int distinct = 1;
  int bronze = scores[0];

  for(int i = 1; i < n; ++i)
  {
    if(scores[i] != scores[i-1])
    {
      ++distinct;
      if(distinct == 3)
      {
        bronze = scores[i];
        break;
      }
    }
  }

  int count{};
  for (int i{}; i < n; ++i)
  {
    if (scores[i] == bronze)
    {
      ++count;
    }
  }

  std::cout << bronze << ' ' << count;

  return 0;
}
