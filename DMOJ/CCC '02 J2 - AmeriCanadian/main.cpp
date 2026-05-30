#include <iostream>
#include <string>

int main()
{
  std::string w{};
  while(w != "quit!")
  {
    std::getline(std::cin, w);
    if(w == "quit!")
      break;

    int n = w.length();

    if((n > 4) && (w[n - 1] == 'r') && (w[n - 2] == 'o') && (w[n - 3] != 'a') && (w[n - 3] != 'e') && (w[n - 3] != 'i') && (w[n - 3] != 'o') && (w[n - 3] != 'u') && (w[n - 3] != 'y')) 
    {
      std::cout << w.substr(0, (n - 2)) << "our\n";
    }
    else
      std::cout << w << '\n';


  }

  return 0;
}
