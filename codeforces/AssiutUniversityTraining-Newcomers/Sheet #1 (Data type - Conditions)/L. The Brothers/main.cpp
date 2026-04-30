#include <iostream>
// #include <string>

int main()
{
  std::string f1{};
  std::string s1{};
  std::cin >> f1 >> s1;

  std::string f2{};
  std::string s2{};
  std::cin >> f2 >> s2;

  if(s1 == s2)
  {
  std::cout << "ARE Brothers" << '\n';
  }
  else
  {
  std::cout << "NOT" << '\n';
  }

  return 0;
}
