#include <iostream>
#include <string>

int main()
{
  int n{};
  std::cin >> n;
  for(int i{}; i < n; ++i)
  {
    int m{};
    std::string word{};

    std::cin >> m;
    std::getline(std::cin, word);

    word.erase(0, 1);
    word.erase(m - 1, 1);


    std::cout << i+1 << " " << word << '\n';
  }

  return 0;
}
