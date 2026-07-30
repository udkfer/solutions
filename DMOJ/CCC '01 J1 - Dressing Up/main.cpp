#include <iostream>

int main()
{
  int h{};
  std::cin >> h;

  for(int i{}; i < (h/2); ++i)
  {
    std::cout << "*";
    for(int j{}; j < i; ++j)
    {
      std::cout << "**";
    }

    int spaces = (2 * h) - 2 - (4 * i);
    for(int k = spaces; k > 0; --k)
    {
      std::cout << " ";
    }

    for(int j{}; j < i; ++j)
    {
      std::cout << "**";
    }
    std::cout << "*";
    std::cout << '\n';
  }

  for(int i{}; i < (h * 2); ++i)
  {
    std::cout << '*';
  }
  std::cout << '\n';

  for(int i = (h/2) - 1; i >= 0; --i)
  {
    std::cout << "*";
    for(int j{}; j < i; ++j)
    {
      std::cout << "**";
    }

    int spaces = (2 * h) - 2 - (4 * i);
    for(int k = spaces; k > 0; --k)
    {
      std::cout << " ";
    }

    for(int j{}; j < i; ++j)
    {
      std::cout << "**";
    }
    std::cout << "*";
    std::cout << '\n';
  }


  return 0;
}
