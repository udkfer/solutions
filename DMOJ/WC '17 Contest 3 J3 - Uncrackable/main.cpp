#include <iostream>
#include <string>

int main()
{
  std::string password{};
  std::cin >> password;

  int lower{}, upper{}, digit{};

  for (char c : password)
  {
    if (std::islower(c)) ++lower;
    else if (std::isupper(c)) ++upper;
    else if (std::isdigit(c)) ++digit;
  }

  if((password.size() >= 8) && (password.size() <= 12) && (lower >= 3) && (upper >= 2) && (digit >= 1))
    std::cout << "Valid\n";
  else
    std::cout << "Invalid\n";

  return 0;
}
