#include <iostream>
#include <string>

int main()
{
  std::string n{};
  std::cin >> n;

  int honiblocks{};
  std::string target = "HONI";
  int pos = 0;

  for(int i{}; i < n.size(); ++i)
  {
    char c = n[i];
    if(c == target[pos])
      pos++;

    if(pos == 4)
    {
      honiblocks++;
      pos = 0;
    }

  }

  std::cout << honiblocks << '\n';

  return 0;
}
