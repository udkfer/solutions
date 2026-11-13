#include <iostream>

int main()
{
  int n{};
  std::cin >> n;

  int lateToday{}, inLine{};

  while(true)
  {
    std::string word{};
    std::cin >> word;

    if(word == "EOF")
      break;
    if(word == "TAKE")
    {
      ++lateToday;
      ++inLine;

      if (n == 999)
        n = 1;
      else
        ++n;
    }
    if(word == "SERVE")
      --inLine;
    if (word == "CLOSE")
    {
      std::cout << lateToday << ' ' << inLine << ' ' << n << '\n';
      lateToday = 0;
      inLine = 0;
    }
  }

  return 0;
}
