#include <iostream>
#include <vector>

int main()
{
  int c{};
  std::cin >> c;

  int length{};

  std::vector<int> top(c);
  for(int i{}; i < c; ++i)
  {
    std::cin >> top[i];
    if(top[i] == 1)
      ++length;
  }

  std::vector<int> bottom(c);
  for(int i{}; i < c; ++i)
  {
    std::cin >> bottom[i];
    if(bottom[i] == 1)
      ++length;
  }

  int answer = length * 3;

  for(int i = 1; i < c; ++i)
  {
    if((top[i] == 1) && (top[i-1] == 1))
      answer -= 2;
  }

  for(int i = 1; i < c; ++i)
  {
    if((bottom[i] == 1) && (bottom[i-1] == 1))
      answer -= 2;
  }

  for(int i{}; i < c; ++i)
  {
    if(i % 2 == 0 && top[i] == 1 && bottom[i] == 1)
      answer -= 2;
  }

  std::cout << answer << '\n';

  return 0;
}
