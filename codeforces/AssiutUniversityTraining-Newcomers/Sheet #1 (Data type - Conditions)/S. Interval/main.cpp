#include <iostream>

int main()
{
  double x{};
  std::cin >> x;

  if(x > 0.0 && x <= 100.0)
  {
      std::cout << "Interval ";

      if(x > 0.0 && x <= 25.0)
      {
      std::cout << "[0,25]" << '\n';
      }
      else if(x > 25.0 && x <= 50.0)
      {
      std::cout << "(25,50]" << '\n';
      }
      else if(x > 50.0 && x <= 75.0)
      {
      std::cout << "(50,75]" << '\n';
      }
      else if(x > 75.0 && x <= 100.0)
      {
      std::cout << "(75,100]" << '\n';
      }

      // if(x < 12.5)
      // {
      // std::cout << "[0,25)" << '\n';
      // }
      // else if(x == 12.5)
      // {
      // std::cout << "(0,25)" << '\n';
      // }
      // else if(x > 12.5 && x < 25.0)
      // {
      // std::cout << "(0,25]" << '\n';
      // }
      // else if(x == 25.0)
      // {
      // std::cout << "[0,25]" << '\n';
      // }
      // else if(x > 25.0 && x < 37.5)
      // {
      // std::cout << "[25,50)" << '\n';
      // }
      // else if(x == 37.5)
      // {
      // std::cout << "(25,50)" << '\n';
      // }
      // else if(x > 37.5 && x <= 50.0)
      // {
      // std::cout << "(25,50]" << '\n';
      // }
      // else if(x > 50.0 && x < 62.5)
      // {
      // std::cout << "[50,75)" << '\n';
      // }
      // else if(x == 62.5)
      // {
      // std::cout << "(50,75)" << '\n';
      // }
      // else if(x > 62.5 && x <= 75.0)
      // {
      // std::cout << "(50,75]" << '\n';
      // }
      // else if(x > 75.0 && x < 87.5)
      // {
      // std::cout << "[75,100)" << '\n';
      // }
      // else if(x == 87.5)
      // {
      // std::cout << "(75,100)" << '\n';
      // }
      // else if(x > 87.5 && x >= 100.0)
      // {
      // std::cout << "(75,100]" << '\n';
      // }

  }
  else
  {
      std::cout << "Out of Intervals" << '\n';
  }


  return 0;
}
