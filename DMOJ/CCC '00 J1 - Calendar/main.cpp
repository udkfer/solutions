#include <iostream>
#include <iomanip>

int main()
{
  int dw{}, dm{};
  std::cin >> dw >> dm;

  std::cout << "Sun Mon Tue Wed Thr Fri Sat\n";
  for (int i = 1; i < dw; ++i)
  {
    if (i == 1) std::cout << "   ";
    else std::cout << "    ";
  }

  int col = dw;
  for (int day = 1; day <= dm; ++day)
  {
    if (col == 1) std::cout << std::setw(3) << day;
    else std::cout << std::setw(4) << day;

    if (col == 7)
    {
      std::cout << '\n';
      col = 1;
    }
    else
    {
      ++col;
    }
  }

  if (col != 1) {
    std::cout << '\n';
  }

  return 0;
}
