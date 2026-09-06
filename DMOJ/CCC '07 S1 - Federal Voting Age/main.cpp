#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  for(int i{}; i < n; ++i)
  {
    int y{}, m{}, d{};
    std::cin >> y >> m >> d;

    if(y < 1989)
      std::cout << "Yes\n";
    else if(y > 1989)
      std::cout << "No\n";
    else 
      if(m < 2)
        std::cout << "Yes\n";
      else if(m > 2)
        std::cout << "No\n";
      else
        if(d <= 27)
          std::cout << "Yes\n";
        else
          std::cout << "No\n";

  }

  return 0;
}
