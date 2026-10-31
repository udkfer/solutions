#include <iostream>
#include <set>

int main()
{
  int x = -1, y = -5;
  std::set<std::pair<int,int>> drilled;
  drilled.insert({x,y});

  int px{}, py = -1;
  drilled.insert({px, py});
  for (int i{}; i < 2; ++i)
  {
    --py;
    drilled.insert({px, py});
  }
  for (int i{}; i < 3; ++i)
  {
    ++px;
    drilled.insert({px, py});
  }
  for (int i{}; i < 2; ++i)
  {
    --py;
    drilled.insert({px, py});
  }
  for (int i{}; i < 2; ++i)
  {
    ++px;
    drilled.insert({px, py});
  }
  for (int i{}; i < 2; ++i)
  {
    ++py;
    drilled.insert({px, py});
  }
  for (int i{}; i < 2; ++i)
  {
    ++px;
    drilled.insert({px, py});
  }
  for (int i{}; i < 4; ++i)
  {
    --py;
    drilled.insert({px, py});
  }
  for (int i{}; i < 8; ++i)
  {
    --px;
    drilled.insert({px, py});
  }
  for (int i{}; i < 2; ++i)
  {
    ++py;
    drilled.insert({px, py});
  }

  char c{};
  int n{};

  while (true) {
    std::cin >> c >> n;
    if (c == 'q') break;

    bool danger = false;
    for (int i{}; i < n; ++i)
    {
      if (c == 'd')
        --y;
      if (c == 'u')
        ++y;
      if (c == 'l')
        --x;
      if (c == 'r')
        ++x;
      if (drilled.count({x,y}))
        danger = true;
      else
        drilled.insert({x,y});
    }

    std::cout << x << ' ' << y << ' ';
    if (danger)
      std::cout << "DANGER\n";
    else
      std::cout << "safe\n";
    if (danger)
      break;
  }

  return 0;
}
