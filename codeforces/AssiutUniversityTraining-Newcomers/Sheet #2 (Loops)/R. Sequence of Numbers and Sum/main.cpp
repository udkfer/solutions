#include <iostream>

int main()
{
  int n{1}, m{1};

  while((n > 0) && (m > 0))
  {
    std::cin >> n >> m;

    if((n > 0) && (m > 0))
    {
      if(n < m)
      {
        int k = n;
        int j = k;

        while(k < m)
        {
          std::cout << k++ << ' ';
          j = j + k;
        }
        std::cout << m <<" sum =" << j << '\n';
      }
      else
      {
        int k = m;
        int j = k;

        while(k < n)
        {
          std::cout << k++ << ' ';
          j = j + k;
        }
        std::cout << n <<" sum =" << j << '\n';
      }
    }
    else
      break;
  }

  return 0;
}
