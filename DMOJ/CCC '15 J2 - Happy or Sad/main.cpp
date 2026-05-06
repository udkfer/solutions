#include <iostream>
#include <string>

int main()
{
  std::string a{};
  std::getline(std::cin, a);

  int h{}, s{};

  for(int i = 0; i < a.length() - 2; i++) {
    if((a[i] == ':') && (a[i+1] == '-') && (a[i+2] == ')'))
      ++h;
    if((a[i] == ':') && (a[i+1] == '-') && (a[i+2] == '('))
      ++s;
  }

  if((h == 0) && (s == 0))
    std::cout << "none\n";
  else if(h > s)
    std::cout << "happy\n";
  else if(h < s)
    std::cout << "sad\n";
  else
    std::cout << "unsure\n";

  return 0;
}
