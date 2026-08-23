#include <iostream>
#include <vector>

int main()
{
  int m{}, n{}, k{};
  std::cin >> m >> n >> k;
  std::vector<int> rowCount(m + 1), colCount(n + 1);

  for (int i{}; i < k; i++) {
    char op;
    int x;
    std::cin >> op >> x;
    if (op == 'R') rowCount[x]++;
    else           colCount[x]++;
  }

  int ans{};
  for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
      if ((rowCount[i] + colCount[j]) % 2 == 1) ans++;
  std::cout << ans << '\n';

  return 0;
}
