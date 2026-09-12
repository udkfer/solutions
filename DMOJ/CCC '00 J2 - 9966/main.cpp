#include <iostream>

int rotateDigit(int d)
{
  switch(d)
  {
    case 0:
      return 0;
    case 1:
      return 1;
    case 8:
      return 8;
    case 6:
      return 9;
    case 9:
      return 6;
    default:
      return -1;
  }
}

bool isRotatable(int x) {
  int orig = x;
  int rot = 0;

  while (x > 0) {
    int d = x % 10;
    int rd = rotateDigit(d);
    if(rd == -1)
      return false;

    rot = rot * 10 + rd;
    x /= 10;
  }
  return rot == orig;
}

int main()
{
  int m{}, n{};
  std::cin >> m >> n;

  int count{};

  for(int i = m; i <= n; ++i)
  {
    if (isRotatable(i))
      count++;
  }

  std::cout << count << "\n";

  return 0;
}
