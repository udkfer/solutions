#include <iostream>
#include <string>

int main()
{
  while(true)
  {
    std::string short_form{};
    std::getline(std::cin, short_form);

    if(short_form == "CU")
      std::cout << "see you\n";
    else if(short_form == ":-)")
      std::cout << "I'm happy\n";
    else if(short_form == ":-(")
      std::cout << "I'm unhappy\n";
    else if(short_form == ";-)")
      std::cout << "wink\n";
    else if(short_form == ":-P")
      std::cout << "stick out my tongue\n";
    else if(short_form == "(~.~)")
      std::cout << "sleepy\n";
    else if(short_form == "TA")
      std::cout << "totally awesome\n";
    else if(short_form == "CCC")
      std::cout << "Canadian Computing Competition\n";
    else if(short_form == "CUZ")
      std::cout << "because\n";
    else if(short_form == "TY")
      std::cout << "thank-you\n";
    else if(short_form == "YW")
      std::cout << "you're welcome\n";
    else if(short_form == "TTYL")
    {
      std::cout << "talk to you later\n";
      break;
    }
    else
      std::cout << short_form << '\n';

  }

  return 0;
}
