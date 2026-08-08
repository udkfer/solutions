#include <iostream>
#include <string>

int main()
{
  std::string verb{}, object{};
  std::cin >> verb >> object;

  if (object.back() == 'e') {
    std::cout << verb << "-tu la " << object << " ?\n";
  } else if (object.back() == 's') {
    std::cout << verb << "-tu les " << object << " ?\n";
  } else {
    std::cout << verb << "-tu le " << object << " ?\n";
  }

  return 0;
}
