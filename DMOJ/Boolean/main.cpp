#include <iostream>
#include <string>

int main()
{
  std::string nots{};
  int count = 0;
  while(nots != "True" && nots != "False")
  {
    std::cin >> nots;
    if (nots == "not") 
      ++count;
  }

  if (count % 2 == 0)
    std::cout << nots << '\n';
  else
    if(nots == "True")
      std::cout << "False" << '\n';
    else
      std::cout << "True" << '\n';


  return 0;
}
