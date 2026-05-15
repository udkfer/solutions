#include <iostream>
#include <string>

int main()
{
  int n{};
  std::cin >> n;
  std::cin.ignore();

  int ct{}, cs{};
  std::string s{};

  int m{};
  while(m < n)
  {
    std::getline(std::cin, s);

    int l{};
    while(l < s.length())
    {
      if(s[l] == 't' || s[l] == 'T')
        ++ct;
      else if(s[l] == 's' || s[l] == 'S')
        ++cs;
      ++l;
    }

    ++m;
  }

  if(ct > cs)
    std::cout << "English\n";
  else if(cs >= ct)
    std::cout << "French\n";

  return 0;
}
