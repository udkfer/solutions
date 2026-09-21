#include <iostream>
#include <string>

int main()
{
  std::string s;
  std::getline(std::cin, s);

  std::string letters{};
  std::string number{};
  bool tighten = true;

  for (char c : s)
  {
    if (c >= 'A' && c <= 'Z')
    {
      if (number != "")
      {
        std::cout << letters << (tighten ? " tighten " : " loosen ") << number << '\n';
        letters = "";
        number = "";
      }
      letters += c;
    }
    else if (c == '+' || c == '-')
      tighten = (c == '+');
    else
      number += c;
  }

  std::cout << letters << (tighten ? " tighten " : " loosen ") << number << '\n';

  return 0;
}
