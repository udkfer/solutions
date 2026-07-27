#include <iostream>
#include <vector>
#include <algorithm>

int n;
std::vector<int> take_to, skip_to, rating;

int solve(int node, int cur_rating) {
  if (node == 0) {
    return cur_rating;
  }

  int take = solve(take_to[node], cur_rating + rating[node]);
  int skip = solve(skip_to[node], cur_rating);

  return std::max(take, skip);
}

int main() {
  std::cin.tie(NULL)->sync_with_stdio(false);

  int r;
  if (!(std::cin >> n >> r)) return 0;

  int sz = (1 << n) - 1;
  int max_node = 1 << (n + 1);

  take_to.assign(max_node, 0);
  skip_to.assign(max_node, 0);
  rating.assign(max_node, 0);

  for (int i = 0; i < sz; ++i) {
    int u, v, w, d;
    std::cin >> u >> v >> w >> d;
    take_to[u] = v;
    skip_to[u] = w;
    rating[u] = d;
  }

  std::cout << solve(1, r) << '\n';

  return 0;
}
