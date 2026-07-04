#include <iostream>

int main()
{
  int t1{}, t2{};
  std::cin >> t1 >> t2;

  int counter = 2;

  int t3 = t1 - t2;

  while(t2 >= t3)
  {
    t1 = t2;
    t2 = t3;
    t3 = t1 - t2;

    ++counter;
  }

  std::cout << ++counter << '\n';

  return 0;
}
