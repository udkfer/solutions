#include <iostream>
#include <string>

int main()
{
  int b{}, n{};
  std::string queue = "ABCDE";

  while(b != 4)
  {
    std::cin >> b >> n;

    switch(b)
    {
      case 4:
        std::cout << queue[0];
        for(int i{1}; i < 5; ++i)
        {
          std::cout << ' ' << queue[i];
        }
        std::cout << "\n";
        break;
      case 1:
        for(int i{}; i < n; ++i)
        {
          queue = queue.substr(1) + queue[0];
        }
        break;
      case 2:
        for(int i{}; i < n; ++i)
        {
          queue = queue[4] + queue.substr(0, 4);
        }
        break;
      case 3:
        for(int i{}; i < n; ++i)
        {
          queue = (queue.substr(1, 1) + queue.substr(0, 1)) + queue.substr(2);
        }
        break;
    }

  }

  return 0;
}
