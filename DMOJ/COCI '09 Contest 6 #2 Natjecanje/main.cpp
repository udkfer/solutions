#include <iostream>
#include <vector>

int main() {
  int n{}, s{}, r{}, val{};
  std::cin >> n >> s >> r;

  std::vector<int> k(n + 2, 1);

  for (int i = 0; i < s; ++i)
  {
    std::cin >> val; --k[val];
  }

  for (int i = 0; i < r; ++i)
  {
    std::cin >> val; ++k[val];
  }


  int count{};
  for (int i = 1; i <= n; ++i) {
    if (k[i] == 0) {
      if (k[i - 1] == 2) { 
        --k[i - 1]; 
      } else if (k[i + 1] == 2) { 
        --k[i + 1]; 
      } else {
        ++count;
      }
    }
  }

  std::cout << count << '\n';

  return 0;
}
