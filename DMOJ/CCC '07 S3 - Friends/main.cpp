#include <iostream>
#include <vector>

int main()
{
  int n{};
  std::cin >> n;

  std::vector<int> friend_of(10000, -1);

  for(int i{}; i < n; ++i)
  {
    int x{}, y{};
    std::cin >> x >> y;
    friend_of[x] = y;
  }

  while (true)
  {
    int a{}, b{};
    std::cin >> a >> b;
    if (a==0 && b==0)
      break;

    int cur = a;
    int hops{};
    std::vector<char> seen(10000, 0);
    seen[a] = 1;
    while(true)
    {
      cur = friend_of[cur];
      ++hops;

      if (cur == b)
        break;
      if (cur == -1 || seen[cur])
        break;

      seen[cur] = 1;
    }
    if (cur == b)
      std::cout << "Yes " << hops - 1 << "\n";
    else
      std::cout << "No\n";
  }

  return 0;
}
