#include <iostream>

int main()
{
  int a{}, b{};

  while(true)
  {
    int op{};
    std::cin >> op;

    if(op == 7)
      break;
    else if(op == 1)
    {
      char x;
      int n;
      std::cin >> x >> n;
      if(x == 'A')
        a = n;
      else
        b = n;
    }
    else if(op == 2)
    {
      char x;
      std::cin >> x;
      if(x == 'A')
        std::cout << a << '\n';
      else
        std::cout << b << '\n';
    }
    else if(op == 3)
    {
      char x{}, y{};
      std::cin >> x >> y;

      int xv{}, yv{};

      if(x == 'A')
        xv = a;
      else
        xv = b;

      if(y=='A')
        yv = a;
      else
        yv = b;

      if(x=='A')
        a = xv + yv;
      else
        b = xv + yv;
    }
    else if(op == 4)
    {
      char x{}, y{};
      std::cin >> x >> y;

      int xv{}, yv{};

      if(x == 'A')
        xv = a;
      else
        xv = b;

      if(y=='A')
        yv = a;
      else
        yv = b;

      if(x=='A')
        a = xv * yv;
      else
        b = xv * yv;
    }
    else if(op == 5)
    {
      char x{}, y{};
      std::cin >> x >> y;

      int xv{}, yv{};

      if(x == 'A')
        xv = a;
      else
        xv = b;

      if(y=='A')
        yv = a;
      else
        yv = b;

      if(x=='A')
        a = xv - yv;
      else
        b = xv - yv;
    }
    else if(op == 6)
    {
      char x{}, y{};
      std::cin >> x >> y;

      int xv{}, yv{};

      if(x == 'A')
        xv = a;
      else
        xv = b;

      if(y=='A')
        yv = a;
      else
        yv = b;

      if(x=='A')
        a = xv / yv;
      else
        b = xv / yv;
    }



  }

  return 0;
}
