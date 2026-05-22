#include <iostream>

int main()
{

  int q{}, m1{}, m2{}, m3{}, p{};
  std::cin >> q >> m1 >> m2 >> m3;

  while(q > 0)
  {
    --q;

    switch(p % 3)
    {
      case 0:
        ++m1;
        break;
      case 1:
        ++m2;
        break;
      case 2:
        ++m3;
        break;
    }

    ++p;

    switch(m1)
    {
      case 35:
        q = q + 30;
        m1 = 0;
    }
    switch(m2)
    {
      case 100:
        q = q + 60;
        m2 = 0;
    }
    switch(m3)
    {
      case 10:
        q = q + 9;
        m3 = 0;
    }
  }

  std::cout << "Martha plays " << p << " times before going broke.\n";

  return 0;
}
