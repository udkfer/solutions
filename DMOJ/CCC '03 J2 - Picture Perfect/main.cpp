#include <iostream>

int main()
{
  int c{}, w{};
  while (std::cin >> c && c != 0)
  {
    int bestL = 1;
    int bestW = c;
    int bestP = 2 * (1 + c);

    for(int l = 1; l * l <= c; ++l)
    {
      if(c % l == 0)
      {
        w = c / l;
        int p = 2*(l+w);
        if(p < bestP)
        {
          bestL=l;
          bestW=w;
          bestP=p;
        }
      }
    }

    std::cout << "Minimum perimeter is " << bestP << " with dimensions " << bestL << " x " << bestW << "\n";

  }

  return 0;
}
