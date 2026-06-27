#include <iostream>
#include <string>

int main()
{
  std::string keyword{};
  std::cin >> keyword;
  std::cin.ignore();

  std::string message{};
  std::getline(std::cin, message); 


  std::string filter = "";
  int keyword_pos{};
  for(char c : message)
  {
    if (c >= 'A' && c <='Z')
      filter += c;
  }

  for(char c : filter)
  {
    int shift = keyword[keyword_pos] - 'A';

    char encrypt = 'A' + (c - 'A' + shift) % 26;

    keyword_pos = (keyword_pos + 1) % keyword.length();

    std::cout << encrypt;
  }

  std::cout << '\n';

  return 0;
}
