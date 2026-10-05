#include <iostream>
#include <string>

int romanValue(char r)
{
  switch (r)
  {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
  }
  return 0;
}

int digitValue(char a)
{
  return a - '0';
}

int main()
{

  std::string arnum{};
  std::cin >> arnum;

  int total{};
  for (std::size_t i{}; i < arnum.size(); i += 2)
  {
    int pairValue = digitValue(arnum[i]) * romanValue(arnum[i + 1]);

    bool hasNext = (i + 2 < arnum.size());

    if (hasNext && romanValue(arnum[i + 3]) > romanValue(arnum[i + 1]))
      total -= pairValue;
    else
      total += pairValue;
  }

  std::cout << total << '\n';

  return 0;
}
