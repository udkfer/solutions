#include <iostream>
#include <string>

int main()
{
  std::string name = "pusheen";
  std::string s{};
  std::cin >> s;
  int errors{};

  for(int i{}; i < name.length(); ++i)
  {
    if(s[i] != name[i])
      ++errors;
  }

  std::cout << errors << '\n';
  return 0;
}
