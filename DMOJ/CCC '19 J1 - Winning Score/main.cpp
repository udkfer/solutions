#include <iostream>

int main()
{
  int i{};
  int a{}, b{};

  int l{2};
  while(l > 0) 
  {
    int s{};
    int ol{3};
    while(ol > 0)
    {
      std::cin >> i;
      s = (i * ol) + s;
      --ol;
    }
    switch(l)
    {
      case 2:
        a = s;
        break;
      case 1:
        b = s;
        break;
    }
    --l;
  }

  if(a > b)
    std::cout << "A\n";
  else if(a < b)
    std::cout << "B\n";
  else
    std::cout << "T\n";

  return 0;
}
