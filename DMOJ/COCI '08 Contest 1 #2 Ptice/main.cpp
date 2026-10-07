#include <iostream>
#include <string>
#include <algorithm>

int score(const std::string& answers, const std::string& pattern)
{
  int total = 0;

  for (int i = 0; i < (int)answers.size(); ++i)
  {
    if (answers[i] == pattern[i % pattern.size()])
    {
      ++total;
    }
  }

  return total;
}

int main()
{
  int n{};
  std::cin >> n;

  std::string answers;
  std::cin >> answers;

  std::string adrian = "ABC";
  std::string bruno  = "BABC";
  std::string goran  = "CCAABB";

  int adrianScore = score(answers, adrian);
  int brunoScore  = score(answers, bruno);
  int goranScore  = score(answers, goran);

  int best = std::max({adrianScore, brunoScore, goranScore});
  std::cout << best << '\n';

  if (adrianScore == best) std::cout << "Adrian\n";
  if (brunoScore  == best) std::cout << "Bruno\n";
  if (goranScore  == best) std::cout << "Goran\n";

  return 0;
}
