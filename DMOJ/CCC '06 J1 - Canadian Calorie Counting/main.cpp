#include <iostream>

int main()
{
  int a{}, b{}, c{}, d{};
  std::cin >> a >> b >> c >> d;

  int cal{};

  switch(a)
  {
    case 1:
      cal = cal + 461;
      break;
    case 2:
      cal = cal + 431;
      break;
    case 3:
      cal = cal + 420;
      break;
  }

  switch(b)
  {
    case 1:
      cal = cal + 100;
      break;
    case 2:
      cal = cal + 57;
      break;
    case 3:
      cal = cal + 70;
      break;
  }

  switch(c)
  {
    case 1:
      cal = cal + 130;
      break;
    case 2:
      cal = cal + 160;
      break;
    case 3:
      cal = cal + 118;
      break;
  }

  switch(d)
  {
    case 1:
      cal = cal + 167;
      break;
    case 2:
      cal = cal + 266;
      break;
    case 3:
      cal = cal + 75;
      break;
  }

  std::cout << "Your total Calorie count is " << cal << ".\n";

  return 0;
}
