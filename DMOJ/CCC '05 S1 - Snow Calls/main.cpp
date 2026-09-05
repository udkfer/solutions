#include <iostream>
#include <string>

char toDigit(char c)
{
  if (c >= 'A' && c <= 'C')
    return '2';
  else if (c >= 'D' && c <= 'F')
    return '3';
  else if (c >= 'G' && c <= 'I')
    return '4';
  else if (c >= 'J' && c <= 'L')
    return '5';
  else if (c >= 'M' && c <= 'O')
    return '6';
  else if (c >= 'P' && c <= 'S')
    return '7';
  else if (c >= 'T' && c <= 'V')
    return '8';
  else if (c >= 'W' && c <= 'Z')
    return '9';
  else
    return c;
}

int main()
{
  int t{};
  std::cin >> t;

  for(int i{}; i < t; ++i)
  {
    std::string s;
    std::cin >> s;

    std::string digits;
    for(char c : s)
    {
      if(c == '-')
        continue;
      else if(digits.size() == 10)
        break;
      else
        digits += toDigit(c);
    }

    std::cout << digits.substr(0,3) + "-" + digits.substr(3,3) + "-" + digits.substr(6,4) << '\n';

  }

  return 0;
}
