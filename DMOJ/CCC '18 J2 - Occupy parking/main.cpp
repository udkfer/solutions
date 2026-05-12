#include <iostream>
#include <string>

int main()
{
  int n{}, o{};
  std::cin >> n;

  std::string y{}, t{};

  std::cin >> y >> t;

  int l{};
  while(l < n)
  {
    if((y[l] == 'C') && (t[l] == 'C'))
      ++o; 
    ++l;
  }

  std::cout << o << '\n';

  return 0;
}
