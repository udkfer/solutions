#include <iostream>

int main()
{
  int far{};
  std::cin >> far;

  std::cout << "A long time ago in a galaxy";

  int l{};
  while(l < far)
  {
    std::cout << " far";

    if((far - l) != 1)
    {
      std::cout << ",";
    }
    ++l;
  }

  std::cout << " away...\n";

  return 0;
}
