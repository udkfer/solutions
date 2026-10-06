#include <iostream>

int main()
{
  int r{}, c{}, k{};
  std::cin >> r >> c >> k;

  long long ways[26][26]{};
  bool cat[26][26]{};

  for(int i{}; i < k; ++i)
  {
    int cr{}, cc{};
    std::cin >> cr >> cc;
    cat[cr][cc] = true;
  }

  for (int i = 1; i <= r; ++i)
  {
    for (int j = 1; j <= c; ++j)
    {
      if (cat[i][j])
        ways[i][j] = 0;
      else if (i == 1 && j == 1) 
        ways[i][j] = 1;               // the seed — what value?
      else
        ways[i][j] = ways[i-1][j] + ways[i][j-1];
    }
  }

  std::cout << ways[r][c] << '\n';


  return 0;
}
