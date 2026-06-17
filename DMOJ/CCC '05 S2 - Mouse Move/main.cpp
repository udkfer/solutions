#include <iostream>

int main()
{
  int c{}, r{};
  std::cin >> c >> r;

  int x_move{}, y_move{};
  int x_cur{}, y_cur{};

  while(true)
  {
    std::cin >> x_move >> y_move;

    if((x_move == 0) && (y_move == 0))
      break;

    x_cur = x_cur + x_move;

    if (x_cur < 0) 
    {
      x_cur = 0;
    } 
    else if (x_cur > c) 
    {
      x_cur = c;
    }

    y_cur = y_cur + y_move;

    if (y_cur < 0) 
    {
      y_cur = 0;
    } 
    else if (y_cur > r) 
    {
      y_cur = r;
    }

    std::cout << x_cur << ' ' << y_cur << '\n';
  }

  return 0;
}
