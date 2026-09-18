#include <iostream>
#include <vector>

int sizeValue(char c)
{
  switch(c)
  {
    case 'S':
      return 0;
    case 'M':
      return 1;
    case 'L':
      return 2;
  }
  return -1;

}

int main()
{
  int j{}, a{};
  std::cin >> j >> a;

  std::vector<char> jerseys(j);


  for(int i{}; i < j; ++i)
  {
    std::cin >> jerseys[i];
  }

  int count{};

  for(int i{}; i < a; ++i)
  {
    char reqSize;
    int num;

    std::cin >> reqSize >> num;

    if(jerseys[num-1] != 'X' && sizeValue(jerseys[num-1]) >= sizeValue(reqSize))
    {
      ++count;
      jerseys[num-1] = 'X';
    }
  }

  std::cout << count << '\n';

  return 0;
}
